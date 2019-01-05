echo off
cls

set count=%1
if %count% lss 1 (echo Invalid parameter) & (pause) & (goto END)
echo Input: %count%
set index=1
set entry=0
IF EXIST SpectrumApp.inc (del /q SpectrumApp.inc)
echo writing app panel...

:LOOP
:WRITEGAME
@echo [Game%index%] >>SpectrumApp.inc
@echo Meter=Image >>SpectrumApp.inc
@echo MeterStyle=GameIcon >>SpectrumApp.inc
@echo ImageName=#@#App\#Gamecover%index%# >>SpectrumApp.inc
@echo X=([SmoothScroll])+(#Space#)*Trunc(%entry%/#Rows#) >>SpectrumApp.inc
@echo Y=((%entry%%%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# >>SpectrumApp.inc
@echo MouseOverAction=[!SetOption "#CURRENTSECTION#" "SolidColor" "0,0,0,1"][Play "#@#Sounds\Hover.wav"][!SetVariable Select "%index%"][!ShowMeter "CoverHighlight"] >>SpectrumApp.inc
@echo MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "SolidColor" "#CoverSolid#"] >>SpectrumApp.inc
@echo LeftMouseUpAction=!Execute [!CommandMeasure InputExecute "Execute %index%"] >>SpectrumApp.inc
@echo.  >>SpectrumApp.inc
:CHECKGAME
if %index% geq  %count% goto LOOPTITLE
set/a index=%index%+1
set/a entry=%index%-1
goto WRITEGAME

:LOOPTITLE
@echo.  >>SpectrumApp.inc
set index=1
set entry=0
:WRITETITLE
@echo [GameTitle%index%] >>SpectrumApp.inc
@echo Meter=String >>SpectrumApp.inc
@echo MeterStyle=GameTitle >>SpectrumApp.inc
@echo X=([SmoothScroll])+(#Space#)*Trunc(%entry%/#Rows#)+(#BannerWidth#/2) >>SpectrumApp.inc
@echo Y=((%entry%%%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT#-#NameY#+#BannerHeight# >>SpectrumApp.inc
@echo Text=#Gamename%index%# >>SpectrumApp.inc
@echo.  >>SpectrumApp.inc

:CHECKTITLE
if %index% geq  %count% goto INPUTEXECUTE
set/a index=%index%+1
set/a entry=%index%-1
goto WRITETITLE

:INPUTEXECUTE
echo writting panel action...
set index=1
@echo [InputExecute] >>SpectrumApp.inc
@echo Measure=Plugin >>SpectrumApp.inc
@echo Plugin=ActionTimer >>SpectrumApp.inc
@echo DynamicVariables=1 >>SpectrumApp.inc
:ADDACTION
@echo ActionList%index%=Select%index%^|Deactivate >>SpectrumApp.inc
set/a index=%index%+1
if %index% LEQ %count% goto ADDACTION
set index=1

:ADDCOMMAND
@echo Select%index%=!Execute [Play "#@#Sounds\Launch.wav"]["#Gamedir%index%#"] >>SpectrumApp.inc
set/a index=%index%+1
if %index% LEQ %count% goto ADDCOMMAND
@echo Deactivate=[!CommandMeasure Exit "Execute 1" "GameHUB"] >>SpectrumApp.inc
goto FINISH

@echo.  >>SpectrumApp.inc
@echo [TotalGameCheck] >>SpectrumApp.inc
@echo Measure=Calc >>SpectrumApp.inc
@echo Formula=TotalGameCheck+1 >>SpectrumApp.inc
@echo IfConditionMode=1 >>SpectrumApp.inc
@echo DynamicVariables=1 >>SpectrumApp.inc
@echo IfCondition=(TotalGameCheck^>#TotalGame#) >>SpectrumApp.inc
@echo IfTrueAction=[!HideMeter "Game[TotalGameCheck]"] >>SpectrumApp.inc
@echo IfCondition2=(TotalGameCheck^>#TotalGame#) ^|^| (#Title#=0) >>SpectrumApp.inc
@echo IfTrueAction2=[!HideMeter "GameTitle[TotalGameCheck]"] >>SpectrumApp.inc
@echo IfCondition3=(TotalGameCheck=%count%) >>SpectrumApp.inc
@echo IfTrueAction3=[!DisableMeasure #CURRENTSECTION#] >>SpectrumApp.inc

:FINISH
@echo.  >>SpectrumApp.inc
@echo [InputCheck] >>SpectrumApp.inc
@echo Measure=Calc >>SpectrumApp.inc
@echo DynamicVariables=1 >>SpectrumApp.inc
@echo Disabled=1 >>SpectrumApp.inc
@echo UpdateDivider=-1 >>SpectrumApp.inc
@echo IfCondition=(#Select#=1) >>SpectrumApp.inc
@echo IfTrueAction=[Play "#@#Sounds\Hover.wav"][!SetOptionGroup "Icon" "SolidColor" "#CoverSolid#"][!SetOption "Game1" "SolidColor" "0,0,0,1"][!ShowMeter "CoverHighlight"][!SetVariable "OffsetX" "(#OffsetX#<20 ? 20 : #OffsetX#)"] >>SpectrumApp.inc
@echo IfCondition2=(#Select#^>1) >>SpectrumApp.inc
@echo IfTrueAction2=[Play "#@#Sounds\Hover.wav"][!SetOptionGroup "Icon" "SolidColor" "#CoverSolid#"][!SetOption "Game#Select#" "SolidColor" "0,0,0,1"][!ShowMeter "CoverHighlight"][!SetVariable "OffsetX" "(#OffsetX#<(-#Space#*(Floor((#Select#-1)/#Rows#))+#Shown#) ? Min(-#Space#*Trunc((#Select#-1)/#Rows#)+#Shown#,20) : (#OffsetX#>(-#Space#*(Trunc((#Select#-1)/#Rows#))+#CURRENTCONFIGWIDTH#-#Shown#*2) ? Max(-#Space#*(Trunc((#Select#-1)/#Rows#))+#CURRENTCONFIGWIDTH#-#Shown#*2,#ScrollLimit#) : #OffsetX#))"] >>SpectrumApp.inc
@echo IfConditionMode=1 >>SpectrumApp.inc

:END
echo Completed!
timeout 1 >nul