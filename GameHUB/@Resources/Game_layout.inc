[MeterTitle]
Meter=String
StringAlign=LEFTBOTTOM
X=(#SkinWidth#)*0.1
Y=(#SkinHeight#)*0.2
FontSize=#TitleScale#
FontColor=#Color#
FontFace=#Font#
AntiAlias=1
Text="Games library"

[MeterBar]
Meter=Shape
Shape=Rectangle (#SkinWidth#*0.1) , (#SkinHeight#*0.2-50) , (#SkinWidth#*0.8-185) , 40, 2 | Fill Color 240,240,240,1 | StrokeWidth 0
Shape2=Rectangle (#SkinWidth#*0.9) , (#SkinHeight#*0.2-50) , -180 , 40, 2 | Fill Color 0,150,255,255 | StrokeWidth 0
DynamicVariables=1
Hidden=(#material#=0 ? 1 : 0)

[Button1]
Meter=Image
ImageName=apps.png
X=(#SkinWidth#*0.9-60)
Y=(#SkinHeight#*0.2-50)
W=60
H=30
SolidColor=0,0,0,1
PreserveAspectRatio=1
Padding=0,5,0,5
LeftMouseUpAction=!Execute [!ActivateConfig "GameHUB" "ListApp.ini"][!DeactivateConfig "GameHUB\Bottom"][Play "#@#Sounds\Click.wav"]
MouseOverAction=[!SetOption "#CURRENTSECTION#" "SolidColor" "#Color#,255"][!SetOption "#CURRENTSECTION#" "ImageTint" "0,0,0,255"][!Update][Play "#@#Sounds\Dock.wav"]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "SolidColor" "0,0,0,1"][!SetOption "#CURRENTSECTION#" "ImageTint" "255,255,255,255"][!Update]

[Button2]
Meter=Image
ImageName=add.png
X=-60r
Y=0r
W=60
H=30
SolidColor=0,0,0,1
PreserveAspectRatio=1
Padding=0,5,0,5
LeftMouseUpAction=!Execute [!CommandMeasure Exit "Execute 1" "GameHUB"][!ActivateConfig "GameHUB\Wizard" "Panel.ini"][Play "#@#Sounds\Click.wav"]
MouseOverAction=[!SetOption "#CURRENTSECTION#" "SolidColor" "#Color#,255"][!SetOption "#CURRENTSECTION#" "ImageTint" "0,0,0,255"][!Update][Play "#@#Sounds\Dock.wav"]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "SolidColor" "0,0,0,1"][!SetOption "#CURRENTSECTION#" "ImageTint" "255,255,255,255"][!Update]

[Button3]
Meter=Image
ImageName=settings.png
X=-60r
Y=0r
W=60
H=30
SolidColor=0,0,0,1
PreserveAspectRatio=1
Padding=0,5,0,5
LeftMouseUpAction=!Execute [!CommandMeasure Exit "Execute 1" "GameHUB"][!ActivateConfig "GameHUB\Wizard" "Configuration.ini"][Play "#@#Sounds\Click.wav"]
MouseOverAction=[!SetOption "#CURRENTSECTION#" "SolidColor" "#Color#,255"][!SetOption "#CURRENTSECTION#" "ImageTint" "0,0,0,255"][!Update][Play "#@#Sounds\Dock.wav"]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "SolidColor" "0,0,0,1"][!SetOption "#CURRENTSECTION#" "ImageTint" "255,255,255,255"][!Update]



[AutoScale]
Measure=Calc 
IfCondition=(1=1)
IfTrueAction=[!Move #SkinX# #SkinY#][!DisableMeasure #CURRENTSECTION#]