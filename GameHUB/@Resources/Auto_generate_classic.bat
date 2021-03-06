echo off
cls

set count=%1
if %count% lss 1 (echo Invalid parameter) & (pause) & (goto END)
echo Input: %count%
set index=1
set entry=0
IF EXIST SpectrumCover.inc (del /q SpectrumCover.inc)
echo writing game panel...

:LOOP
:WRITEGAME
@echo [Game%index%] >>SpectrumCover.inc
@echo Meter=Image >>SpectrumCover.inc
@echo MeterStyle=GameIcon >>SpectrumCover.inc
@echo ImageName=#@#Spectrum\#Gamecover%index%# >>SpectrumCover.inc
@echo X=([SmoothScroll])+(#Space#)*Trunc(%entry%/#Rows#) >>SpectrumCover.inc
@echo Y=((%entry%%%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# >>SpectrumCover.inc
@echo MouseOverAction=[!SetOption "#CURRENTSECTION#" "SolidColor" "0,0,0,1"][Play "#@#Sounds\Hover.wav"][!SetVariable Select "%index%"][!ShowMeter "CoverHighlight"] >>SpectrumCover.inc
@echo MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "SolidColor" "#CoverSolid#"] >>SpectrumCover.inc
@echo LeftMouseUpAction=!Execute [!CommandMeasure InputExecute "Execute %index%"] >>SpectrumCover.inc
@echo.  >>SpectrumCover.inc
:CHECKGAME
if %index% geq  %count% goto LOOPTITLE
set/a index=%index%+1
set/a entry=%index%-1
goto WRITEGAME

:LOOPTITLE
@echo.  >>SpectrumCover.inc
set index=1
set entry=0
:WRITETITLE
@echo [GameTitle%index%] >>SpectrumCover.inc
@echo Meter=String >>SpectrumCover.inc
@echo MeterStyle=GameTitle >>SpectrumCover.inc
@echo X=([SmoothScroll])+(#Space#)*Trunc(%entry%/#Rows#)+(#BannerWidth#/2) >>SpectrumCover.inc
@echo Y=((%entry%%%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT#-#NameY#+#BannerHeight# >>SpectrumCover.inc
@echo Text=#Gamename%index%# >>SpectrumCover.inc
@echo.  >>SpectrumCover.inc

:CHECKTITLE
if %index% geq  %count% goto INPUTEXECUTE
set/a index=%index%+1
set/a entry=%index%-1
goto WRITETITLE

:INPUTEXECUTE
echo writting panel action...
set index=1
@echo [InputExecute] >>SpectrumCover.inc
@echo Measure=Plugin >>SpectrumCover.inc
@echo Plugin=ActionTimer >>SpectrumCover.inc
@echo DynamicVariables=1 >>SpectrumCover.inc
:ADDACTION
@echo ActionList%index%=Select%index%^|Deactivate >>SpectrumCover.inc
set/a index=%index%+1
if %index% LEQ %count% goto ADDACTION
set index=1

:ADDCOMMAND
@echo Select%index%=!Execute [Play "#@#Sounds\Launch.wav"]["#Gamedir%index%#"] >>SpectrumCover.inc
set/a index=%index%+1
if %index% LEQ %count% goto ADDCOMMAND
@echo Deactivate=[!CommandMeasure Exit "Execute 1" "GameHUB"] >>SpectrumCover.inc
goto FINISH

@echo.  >>SpectrumCover.inc
@echo [TotalGameCheck] >>SpectrumCover.inc
@echo Measure=Calc >>SpectrumCover.inc
@echo Formula=TotalGameCheck+1 >>SpectrumCover.inc
@echo IfConditionMode=1 >>SpectrumCover.inc
@echo DynamicVariables=1 >>SpectrumCover.inc
@echo IfCondition=(TotalGameCheck^>#TotalGame#) >>SpectrumCover.inc
@echo IfTrueAction=[!HideMeter "Game[TotalGameCheck]"] >>SpectrumCover.inc
@echo IfCondition2=(TotalGameCheck^>#TotalGame#) ^|^| (#Title#=0) >>SpectrumCover.inc
@echo IfTrueAction2=[!HideMeter "GameTitle[TotalGameCheck]"] >>SpectrumCover.inc
@echo IfCondition3=(TotalGameCheck=%count%) >>SpectrumCover.inc
@echo IfTrueAction3=[!DisableMeasure #CURRENTSECTION#] >>SpectrumCover.inc

:FINISH
@echo.  >>SpectrumCover.inc
@echo [InputCheck] >>SpectrumCover.inc
@echo Measure=Calc >>SpectrumCover.inc
@echo DynamicVariables=1 >>SpectrumCover.inc
@echo Disabled=1 >>SpectrumCover.inc
@echo UpdateDivider=-1 >>SpectrumCover.inc
@echo IfCondition=(#Select#=1) >>SpectrumCover.inc
@echo IfTrueAction=[Play "#@#Sounds\Hover.wav"][!SetOptionGroup "Icon" "SolidColor" "#CoverSolid#"][!SetOption "Game1" "SolidColor" "0,0,0,1"][!ShowMeter "CoverHighlight"][!SetVariable "OffsetX" "(#OffsetX#<20 ? 20 : #OffsetX#)"] >>SpectrumCover.inc
@echo IfCondition2=(#Select#^>1) >>SpectrumCover.inc
@echo IfTrueAction2=[Play "#@#Sounds\Hover.wav"][!SetOptionGroup "Icon" "SolidColor" "#CoverSolid#"][!SetOption "Game#Select#" "SolidColor" "0,0,0,1"][!ShowMeter "CoverHighlight"][!SetVariable "OffsetX" "(#OffsetX#<(-#Space#*(Floor((#Select#-1)/#Rows#))+#Shown#) ? Min(-#Space#*Trunc((#Select#-1)/#Rows#)+#Shown#,20) : (#OffsetX#>(-#Space#*(Trunc((#Select#-1)/#Rows#))+#CURRENTCONFIGWIDTH#-#Shown#*2) ? Max(-#Space#*(Trunc((#Select#-1)/#Rows#))+#CURRENTCONFIGWIDTH#-#Shown#*2,#ScrollLimit#) : #OffsetX#))"] >>SpectrumCover.inc
@echo IfConditionMode=1 >>SpectrumCover.inc

:END
echo Completed!
timeout 1 >nul