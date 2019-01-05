[GameBack1] 
Meter=Image 
MeterStyle=GameCover 
X=([SmoothScroll])+(#Space#)*Trunc(0/#Rows#) 
Y=((0%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
ImageName=#@#Spectrum\Cover\#Gamewall1# 
Hidden=1 
[Game1] 
Meter=Image 
MeterStyle=GameIcon 
ImageName=#@#Spectrum\#Gamecover1# 
X=([SmoothScroll])+(#Space#)*Trunc(0/#Rows#) 
Y=((0%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
MouseOverAction=[Play "#@#Sounds\Hover.wav"][!ShowMeter "GameBack1"][!SetVariable Select "1"] 
MouseLeaveAction=[!HideMeter "GameBack1"] 
LeftMouseUpAction=!Execute [!CommandMeasure InputExecute "Execute 1"] 
[GameTitle1] 
Meter=String 
MeterStyle=GameTitle 
X=([SmoothScroll])+(#Space#)*Trunc(0/#Rows#)+(#BannerWidth#/2) 
Y=((0%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT#-#NameY#+#BannerHeight# 
Text=#Gamename1# 
  
[GameBack2] 
Meter=Image 
MeterStyle=GameCover 
X=([SmoothScroll])+(#Space#)*Trunc(1/#Rows#) 
Y=((1%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
ImageName=#@#Spectrum\Cover\#Gamewall2# 
Hidden=1 
[Game2] 
Meter=Image 
MeterStyle=GameIcon 
ImageName=#@#Spectrum\#Gamecover2# 
X=([SmoothScroll])+(#Space#)*Trunc(1/#Rows#) 
Y=((1%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
MouseOverAction=[Play "#@#Sounds\Hover.wav"][!ShowMeter "GameBack2"][!SetVariable Select "2"] 
MouseLeaveAction=[!HideMeter "GameBack2"] 
LeftMouseUpAction=!Execute [!CommandMeasure InputExecute "Execute 2"] 
[GameTitle2] 
Meter=String 
MeterStyle=GameTitle 
X=([SmoothScroll])+(#Space#)*Trunc(1/#Rows#)+(#BannerWidth#/2) 
Y=((1%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT#-#NameY#+#BannerHeight# 
Text=#Gamename2# 
  
[GameBack3] 
Meter=Image 
MeterStyle=GameCover 
X=([SmoothScroll])+(#Space#)*Trunc(2/#Rows#) 
Y=((2%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
ImageName=#@#Spectrum\Cover\#Gamewall3# 
Hidden=1 
[Game3] 
Meter=Image 
MeterStyle=GameIcon 
ImageName=#@#Spectrum\#Gamecover3# 
X=([SmoothScroll])+(#Space#)*Trunc(2/#Rows#) 
Y=((2%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
MouseOverAction=[Play "#@#Sounds\Hover.wav"][!ShowMeter "GameBack3"][!SetVariable Select "3"] 
MouseLeaveAction=[!HideMeter "GameBack3"] 
LeftMouseUpAction=!Execute [!CommandMeasure InputExecute "Execute 3"] 
[GameTitle3] 
Meter=String 
MeterStyle=GameTitle 
X=([SmoothScroll])+(#Space#)*Trunc(2/#Rows#)+(#BannerWidth#/2) 
Y=((2%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT#-#NameY#+#BannerHeight# 
Text=#Gamename3# 
  
[GameBack4] 
Meter=Image 
MeterStyle=GameCover 
X=([SmoothScroll])+(#Space#)*Trunc(3/#Rows#) 
Y=((3%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
ImageName=#@#Spectrum\Cover\#Gamewall4# 
Hidden=1 
[Game4] 
Meter=Image 
MeterStyle=GameIcon 
ImageName=#@#Spectrum\#Gamecover4# 
X=([SmoothScroll])+(#Space#)*Trunc(3/#Rows#) 
Y=((3%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
MouseOverAction=[Play "#@#Sounds\Hover.wav"][!ShowMeter "GameBack4"][!SetVariable Select "4"] 
MouseLeaveAction=[!HideMeter "GameBack4"] 
LeftMouseUpAction=!Execute [!CommandMeasure InputExecute "Execute 4"] 
[GameTitle4] 
Meter=String 
MeterStyle=GameTitle 
X=([SmoothScroll])+(#Space#)*Trunc(3/#Rows#)+(#BannerWidth#/2) 
Y=((3%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT#-#NameY#+#BannerHeight# 
Text=#Gamename4# 
  
[GameBack5] 
Meter=Image 
MeterStyle=GameCover 
X=([SmoothScroll])+(#Space#)*Trunc(4/#Rows#) 
Y=((4%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
ImageName=#@#Spectrum\Cover\#Gamewall5# 
Hidden=1 
[Game5] 
Meter=Image 
MeterStyle=GameIcon 
ImageName=#@#Spectrum\#Gamecover5# 
X=([SmoothScroll])+(#Space#)*Trunc(4/#Rows#) 
Y=((4%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
MouseOverAction=[Play "#@#Sounds\Hover.wav"][!ShowMeter "GameBack5"][!SetVariable Select "5"] 
MouseLeaveAction=[!HideMeter "GameBack5"] 
LeftMouseUpAction=!Execute [!CommandMeasure InputExecute "Execute 5"] 
[GameTitle5] 
Meter=String 
MeterStyle=GameTitle 
X=([SmoothScroll])+(#Space#)*Trunc(4/#Rows#)+(#BannerWidth#/2) 
Y=((4%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT#-#NameY#+#BannerHeight# 
Text=#Gamename5# 
  
[GameBack6] 
Meter=Image 
MeterStyle=GameCover 
X=([SmoothScroll])+(#Space#)*Trunc(5/#Rows#) 
Y=((5%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
ImageName=#@#Spectrum\Cover\#Gamewall6# 
Hidden=1 
[Game6] 
Meter=Image 
MeterStyle=GameIcon 
ImageName=#@#Spectrum\#Gamecover6# 
X=([SmoothScroll])+(#Space#)*Trunc(5/#Rows#) 
Y=((5%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
MouseOverAction=[Play "#@#Sounds\Hover.wav"][!ShowMeter "GameBack6"][!SetVariable Select "6"] 
MouseLeaveAction=[!HideMeter "GameBack6"] 
LeftMouseUpAction=!Execute [!CommandMeasure InputExecute "Execute 6"] 
[GameTitle6] 
Meter=String 
MeterStyle=GameTitle 
X=([SmoothScroll])+(#Space#)*Trunc(5/#Rows#)+(#BannerWidth#/2) 
Y=((5%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT#-#NameY#+#BannerHeight# 
Text=#Gamename6# 
  
[GameBack7] 
Meter=Image 
MeterStyle=GameCover 
X=([SmoothScroll])+(#Space#)*Trunc(6/#Rows#) 
Y=((6%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
ImageName=#@#Spectrum\Cover\#Gamewall7# 
Hidden=1 
[Game7] 
Meter=Image 
MeterStyle=GameIcon 
ImageName=#@#Spectrum\#Gamecover7# 
X=([SmoothScroll])+(#Space#)*Trunc(6/#Rows#) 
Y=((6%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
MouseOverAction=[Play "#@#Sounds\Hover.wav"][!ShowMeter "GameBack7"][!SetVariable Select "7"] 
MouseLeaveAction=[!HideMeter "GameBack7"] 
LeftMouseUpAction=!Execute [!CommandMeasure InputExecute "Execute 7"] 
[GameTitle7] 
Meter=String 
MeterStyle=GameTitle 
X=([SmoothScroll])+(#Space#)*Trunc(6/#Rows#)+(#BannerWidth#/2) 
Y=((6%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT#-#NameY#+#BannerHeight# 
Text=#Gamename7# 
  
[GameBack8] 
Meter=Image 
MeterStyle=GameCover 
X=([SmoothScroll])+(#Space#)*Trunc(7/#Rows#) 
Y=((7%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
ImageName=#@#Spectrum\Cover\#Gamewall8# 
Hidden=1 
[Game8] 
Meter=Image 
MeterStyle=GameIcon 
ImageName=#@#Spectrum\#Gamecover8# 
X=([SmoothScroll])+(#Space#)*Trunc(7/#Rows#) 
Y=((7%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
MouseOverAction=[Play "#@#Sounds\Hover.wav"][!ShowMeter "GameBack8"][!SetVariable Select "8"] 
MouseLeaveAction=[!HideMeter "GameBack8"] 
LeftMouseUpAction=!Execute [!CommandMeasure InputExecute "Execute 8"] 
[GameTitle8] 
Meter=String 
MeterStyle=GameTitle 
X=([SmoothScroll])+(#Space#)*Trunc(7/#Rows#)+(#BannerWidth#/2) 
Y=((7%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT#-#NameY#+#BannerHeight# 
Text=#Gamename8# 
  
[GameBack9] 
Meter=Image 
MeterStyle=GameCover 
X=([SmoothScroll])+(#Space#)*Trunc(8/#Rows#) 
Y=((8%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
ImageName=#@#Spectrum\Cover\#Gamewall9# 
Hidden=1 
[Game9] 
Meter=Image 
MeterStyle=GameIcon 
ImageName=#@#Spectrum\#Gamecover9# 
X=([SmoothScroll])+(#Space#)*Trunc(8/#Rows#) 
Y=((8%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
MouseOverAction=[Play "#@#Sounds\Hover.wav"][!ShowMeter "GameBack9"][!SetVariable Select "9"] 
MouseLeaveAction=[!HideMeter "GameBack9"] 
LeftMouseUpAction=!Execute [!CommandMeasure InputExecute "Execute 9"] 
[GameTitle9] 
Meter=String 
MeterStyle=GameTitle 
X=([SmoothScroll])+(#Space#)*Trunc(8/#Rows#)+(#BannerWidth#/2) 
Y=((8%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT#-#NameY#+#BannerHeight# 
Text=#Gamename9# 
  
[GameBack10] 
Meter=Image 
MeterStyle=GameCover 
X=([SmoothScroll])+(#Space#)*Trunc(9/#Rows#) 
Y=((9%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
ImageName=#@#Spectrum\Cover\#Gamewall10# 
Hidden=1 
[Game10] 
Meter=Image 
MeterStyle=GameIcon 
ImageName=#@#Spectrum\#Gamecover10# 
X=([SmoothScroll])+(#Space#)*Trunc(9/#Rows#) 
Y=((9%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
MouseOverAction=[Play "#@#Sounds\Hover.wav"][!ShowMeter "GameBack10"][!SetVariable Select "10"] 
MouseLeaveAction=[!HideMeter "GameBack10"] 
LeftMouseUpAction=!Execute [!CommandMeasure InputExecute "Execute 10"] 
[GameTitle10] 
Meter=String 
MeterStyle=GameTitle 
X=([SmoothScroll])+(#Space#)*Trunc(9/#Rows#)+(#BannerWidth#/2) 
Y=((9%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT#-#NameY#+#BannerHeight# 
Text=#Gamename10# 
  
[GameBack11] 
Meter=Image 
MeterStyle=GameCover 
X=([SmoothScroll])+(#Space#)*Trunc(10/#Rows#) 
Y=((10%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
ImageName=#@#Spectrum\Cover\#Gamewall11# 
Hidden=1 
[Game11] 
Meter=Image 
MeterStyle=GameIcon 
ImageName=#@#Spectrum\#Gamecover11# 
X=([SmoothScroll])+(#Space#)*Trunc(10/#Rows#) 
Y=((10%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
MouseOverAction=[Play "#@#Sounds\Hover.wav"][!ShowMeter "GameBack11"][!SetVariable Select "11"] 
MouseLeaveAction=[!HideMeter "GameBack11"] 
LeftMouseUpAction=!Execute [!CommandMeasure InputExecute "Execute 11"] 
[GameTitle11] 
Meter=String 
MeterStyle=GameTitle 
X=([SmoothScroll])+(#Space#)*Trunc(10/#Rows#)+(#BannerWidth#/2) 
Y=((10%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT#-#NameY#+#BannerHeight# 
Text=#Gamename11# 
  
[GameBack12] 
Meter=Image 
MeterStyle=GameCover 
X=([SmoothScroll])+(#Space#)*Trunc(11/#Rows#) 
Y=((11%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
ImageName=#@#Spectrum\Cover\#Gamewall12# 
Hidden=1 
[Game12] 
Meter=Image 
MeterStyle=GameIcon 
ImageName=#@#Spectrum\#Gamecover12# 
X=([SmoothScroll])+(#Space#)*Trunc(11/#Rows#) 
Y=((11%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
MouseOverAction=[Play "#@#Sounds\Hover.wav"][!ShowMeter "GameBack12"][!SetVariable Select "12"] 
MouseLeaveAction=[!HideMeter "GameBack12"] 
LeftMouseUpAction=!Execute [!CommandMeasure InputExecute "Execute 12"] 
[GameTitle12] 
Meter=String 
MeterStyle=GameTitle 
X=([SmoothScroll])+(#Space#)*Trunc(11/#Rows#)+(#BannerWidth#/2) 
Y=((11%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT#-#NameY#+#BannerHeight# 
Text=#Gamename12# 
  
[GameBack13] 
Meter=Image 
MeterStyle=GameCover 
X=([SmoothScroll])+(#Space#)*Trunc(12/#Rows#) 
Y=((12%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
ImageName=#@#Spectrum\Cover\#Gamewall13# 
Hidden=1 
[Game13] 
Meter=Image 
MeterStyle=GameIcon 
ImageName=#@#Spectrum\#Gamecover13# 
X=([SmoothScroll])+(#Space#)*Trunc(12/#Rows#) 
Y=((12%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
MouseOverAction=[Play "#@#Sounds\Hover.wav"][!ShowMeter "GameBack13"][!SetVariable Select "13"] 
MouseLeaveAction=[!HideMeter "GameBack13"] 
LeftMouseUpAction=!Execute [!CommandMeasure InputExecute "Execute 13"] 
[GameTitle13] 
Meter=String 
MeterStyle=GameTitle 
X=([SmoothScroll])+(#Space#)*Trunc(12/#Rows#)+(#BannerWidth#/2) 
Y=((12%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT#-#NameY#+#BannerHeight# 
Text=#Gamename13# 
  
[GameBack14] 
Meter=Image 
MeterStyle=GameCover 
X=([SmoothScroll])+(#Space#)*Trunc(13/#Rows#) 
Y=((13%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
ImageName=#@#Spectrum\Cover\#Gamewall14# 
Hidden=1 
[Game14] 
Meter=Image 
MeterStyle=GameIcon 
ImageName=#@#Spectrum\#Gamecover14# 
X=([SmoothScroll])+(#Space#)*Trunc(13/#Rows#) 
Y=((13%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT# 
MouseOverAction=[Play "#@#Sounds\Hover.wav"][!ShowMeter "GameBack14"][!SetVariable Select "14"] 
MouseLeaveAction=[!HideMeter "GameBack14"] 
LeftMouseUpAction=!Execute [!CommandMeasure InputExecute "Execute 14"] 
[GameTitle14] 
Meter=String 
MeterStyle=GameTitle 
X=([SmoothScroll])+(#Space#)*Trunc(13/#Rows#)+(#BannerWidth#/2) 
Y=((13%#Rows#)*(#BannerHeight#+#Rowspace#))-[SmoothTransition]+#CURRENTCONFIGHEIGHT#-#NameY#+#BannerHeight# 
Text=#Gamename14# 
  
[InputExecute] 
Measure=Plugin 
Plugin=ActionTimer 
ActionList1=Select1|Deactivate 
ActionList2=Select2|Deactivate 
ActionList3=Select3|Deactivate 
ActionList4=Select4|Deactivate 
ActionList5=Select5|Deactivate 
ActionList6=Select6|Deactivate 
ActionList7=Select7|Deactivate 
ActionList8=Select8|Deactivate 
ActionList9=Select9|Deactivate 
ActionList10=Select10|Deactivate 
ActionList11=Select11|Deactivate 
ActionList12=Select12|Deactivate 
ActionList13=Select13|Deactivate 
ActionList14=Select14|Deactivate 
Select1=!Execute [Play "#@#Sounds\Launch.wav"]["#Gamedir1#"] 
Select2=!Execute [Play "#@#Sounds\Launch.wav"]["#Gamedir2#"] 
Select3=!Execute [Play "#@#Sounds\Launch.wav"]["#Gamedir3#"] 
Select4=!Execute [Play "#@#Sounds\Launch.wav"]["#Gamedir4#"] 
Select5=!Execute [Play "#@#Sounds\Launch.wav"]["#Gamedir5#"] 
Select6=!Execute [Play "#@#Sounds\Launch.wav"]["#Gamedir6#"] 
Select7=!Execute [Play "#@#Sounds\Launch.wav"]["#Gamedir7#"] 
Select8=!Execute [Play "#@#Sounds\Launch.wav"]["#Gamedir8#"] 
Select9=!Execute [Play "#@#Sounds\Launch.wav"]["#Gamedir9#"] 
Select10=!Execute [Play "#@#Sounds\Launch.wav"]["#Gamedir10#"] 
Select11=!Execute [Play "#@#Sounds\Launch.wav"]["#Gamedir11#"] 
Select12=!Execute [Play "#@#Sounds\Launch.wav"]["#Gamedir12#"] 
Select13=!Execute [Play "#@#Sounds\Launch.wav"]["#Gamedir13#"] 
Select14=!Execute [Play "#@#Sounds\Launch.wav"]["#Gamedir14#"] 
Deactivate=[!CommandMeasure Exit "Execute 1" "GameHUB"] 
  
[TotalGameCheck] 
Measure=Calc 
Formula=TotalGameCheck+1 
IfConditionMode=1 
DynamicVariables=1 
IfCondition=(TotalGameCheck>#TotalGame#) 
IfTrueAction=[!HideMeter "Game[TotalGameCheck]"] 
IfCondition2=(TotalGameCheck>#TotalGame#) || (#Title#=0) 
IfTrueAction2=[!HideMeter "GameTitle[TotalGameCheck]"] 
IfCondition3=(TotalGameCheck=14) 
IfTrueAction3=[!DisableMeasure #CURRENTSECTION#] 
  
[InputCheck] 
Measure=Calc 
DynamicVariables=1 
Disabled=1 
UpdateDivider=-1 
IfCondition=(#Select#=1) 
IfTrueAction=[Play "#@#Sounds\Hover.wav"][!SetOptionGroup "Cover" "Hidden" "1"][!ShowMeter "GameBack1"][!SetVariable "OffsetX" "(#OffsetX#<20 ? 20 : #OffsetX#)"] 
IfCondition2=(#Select#>1) 
IfTrueAction2=[Play "#@#Sounds\Hover.wav"][!SetOptionGroup "Cover" "Hidden" "1"][!ShowMeter "GameBack#Select#"][!SetVariable "OffsetX" "(#OffsetX#<(-#Space#*(Floor((#Select#-1)/#Rows#))+#Shown#) ? Min(-#Space#*Trunc((#Select#-1)/#Rows#)+#Shown#,20) : (#OffsetX#>(-#Space#*(Trunc((#Select#-1)/#Rows#))+#CURRENTCONFIGWIDTH#-#Shown#*2) ? Max(-#Space#*(Trunc((#Select#-1)/#Rows#))+#CURRENTCONFIGWIDTH#-#Shown#*2,#ScrollLimit#) : #OffsetX#))"] 
IfConditionMode=1 
