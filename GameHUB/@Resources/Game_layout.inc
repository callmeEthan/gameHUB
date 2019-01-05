[MeterTitle]
Meter=String
StringAlign=LEFTBOTTOM
X=(#SkinWidth#)*0.15
Y=(#SkinHeight#)*0.15
FontSize=#TitleScale#
FontColor=#Color#
FontFace=#Font#
AntiAlias=1
Text="Games library"

[Line]
meter=Image
ImageName=#@#separate.png
ImageAlpha=#LineAlpha#
X=(#SkinWidth#)*0.1
W=(#SkinWidth#)*0.8
Y=(#SkinHeight#)*0.17


[AutoScale]
Measure=Calc 
IfCondition=(1=1)
IfTrueAction=[!Move #SkinX# #SkinY#][!DisableMeasure #CURRENTSECTION#]