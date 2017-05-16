# Microsoft Developer Studio Project File - Name="CalculatorCommandPattern" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=CalculatorCommandPattern - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "CalculatorCommandPattern.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "CalculatorCommandPattern.mak" CFG="CalculatorCommandPattern - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "CalculatorCommandPattern - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "CalculatorCommandPattern - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "CalculatorCommandPattern - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x419 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x419 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "CalculatorCommandPattern - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x419 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x419 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "CalculatorCommandPattern - Win32 Release"
# Name "CalculatorCommandPattern - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Group "Commands"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\Command.cpp
# End Source File
# Begin Source File

SOURCE=.\DivCommand.cpp
# End Source File
# Begin Source File

SOURCE=.\EnterCommand.cpp
# End Source File
# Begin Source File

SOURCE=.\FiveCommand.cpp
# End Source File
# Begin Source File

SOURCE=.\FourCommand.cpp
# End Source File
# Begin Source File

SOURCE=.\MinusCommand.cpp
# End Source File
# Begin Source File

SOURCE=.\MulCommand.cpp
# End Source File
# Begin Source File

SOURCE=.\NineCommand.cpp
# End Source File
# Begin Source File

SOURCE=.\OneCommand.cpp
# End Source File
# Begin Source File

SOURCE=.\PlusCommand.cpp
# End Source File
# Begin Source File

SOURCE=.\PointCommand.cpp
# End Source File
# Begin Source File

SOURCE=.\SevenCommand.cpp
# End Source File
# Begin Source File

SOURCE=.\SixCommand.cpp
# End Source File
# Begin Source File

SOURCE=.\ThreeCommand.cpp
# End Source File
# Begin Source File

SOURCE=.\TwoCommand.cpp
# End Source File
# Begin Source File

SOURCE=.\ZeroCommand.cpp
# End Source File
# End Group
# Begin Group "MathOps"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\DivMathOp.cpp
# End Source File
# Begin Source File

SOURCE=.\MathOp.cpp
# End Source File
# Begin Source File

SOURCE=.\MinusMathOp.cpp
# End Source File
# Begin Source File

SOURCE=.\MulMathOp.cpp
# End Source File
# Begin Source File

SOURCE=.\PlusMathOp.cpp
# End Source File
# End Group
# Begin Group "States"

# PROP Default_Filter ".h"
# Begin Source File

SOURCE=.\EnterSimpleCommandParserState.cpp
# End Source File
# Begin Source File

SOURCE=.\InitSimpleCommandParserState.cpp
# End Source File
# Begin Source File

SOURCE=.\InputScreenState.cpp
# End Source File
# Begin Source File

SOURCE=.\ScreenState.cpp
# End Source File
# Begin Source File

SOURCE=.\SimpleCommandParserState.cpp
# End Source File
# Begin Source File

SOURCE=.\WaitingScreenState.cpp
# End Source File
# End Group
# Begin Group "DataStructures"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\CommandList.cpp
# End Source File
# Begin Source File

SOURCE=.\DigitsList.cpp
# End Source File
# Begin Source File

SOURCE=.\MathOpList.cpp
# End Source File
# End Group
# Begin Source File

SOURCE=.\Calculator.cpp
# End Source File
# Begin Source File

SOURCE=.\CalculatorCommandPattern.cpp
# End Source File
# Begin Source File

SOURCE=.\CalculatorCommandPattern.rc
# End Source File
# Begin Source File

SOURCE=.\CalculatorCommandPatternDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\CommandParser.cpp
# End Source File
# Begin Source File

SOURCE=.\EightCommand.cpp
# End Source File
# Begin Source File

SOURCE=.\Invoker.cpp
# End Source File
# Begin Source File

SOURCE=.\Screen.cpp
# End Source File
# Begin Source File

SOURCE=.\SimpleCalculator.cpp
# End Source File
# Begin Source File

SOURCE=.\SimpleCommandParser.cpp
# End Source File
# Begin Source File

SOURCE=.\SimpleScreen.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\StrToDig.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Group "Commands No. 1"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\Command.h
# End Source File
# Begin Source File

SOURCE=.\DivCommand.h
# End Source File
# Begin Source File

SOURCE=.\EightCommand.h
# End Source File
# Begin Source File

SOURCE=.\EnterCommand.h
# End Source File
# Begin Source File

SOURCE=.\FiveCommand.h
# End Source File
# Begin Source File

SOURCE=.\FourCommand.h
# End Source File
# Begin Source File

SOURCE=.\MinusCommand.h
# End Source File
# Begin Source File

SOURCE=.\MulCommand.h
# End Source File
# Begin Source File

SOURCE=.\NineCommand.h
# End Source File
# Begin Source File

SOURCE=.\OneCommand.h
# End Source File
# Begin Source File

SOURCE=.\PlusCommand.h
# End Source File
# Begin Source File

SOURCE=.\PointCommand.h
# End Source File
# Begin Source File

SOURCE=.\SevenCommand.h
# End Source File
# Begin Source File

SOURCE=.\SixCommand.h
# End Source File
# Begin Source File

SOURCE=.\ThreeCommand.h
# End Source File
# Begin Source File

SOURCE=.\TwoCommand.h
# End Source File
# Begin Source File

SOURCE=.\ZeroCommand.h
# End Source File
# End Group
# Begin Group "MathOps No. 1"

# PROP Default_Filter "h"
# Begin Source File

SOURCE=.\DivMathOp.h
# End Source File
# Begin Source File

SOURCE=.\MathOp.h
# End Source File
# Begin Source File

SOURCE=.\MinusMathOp.h
# End Source File
# Begin Source File

SOURCE=.\MulMathOp.h
# End Source File
# Begin Source File

SOURCE=.\PlusMathOp.h
# End Source File
# End Group
# Begin Group "DataStructures No. 1"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\CommandList.h
# End Source File
# Begin Source File

SOURCE=.\DigitsList.h
# End Source File
# Begin Source File

SOURCE=.\MathOpList.h
# End Source File
# End Group
# Begin Group "States No. 1"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\EnterSimpleCommandParserState.h
# End Source File
# Begin Source File

SOURCE=.\InitSimpleCommandParserState.h
# End Source File
# Begin Source File

SOURCE=.\InputScreenState.h
# End Source File
# Begin Source File

SOURCE=.\ScreenState.h
# End Source File
# Begin Source File

SOURCE=.\SimpleCommandParserState.h
# End Source File
# Begin Source File

SOURCE=.\WaitingScreenState.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\Calculator.h
# End Source File
# Begin Source File

SOURCE=.\CalculatorCommandPattern.h
# End Source File
# Begin Source File

SOURCE=.\CalculatorCommandPatternDlg.h
# End Source File
# Begin Source File

SOURCE=.\CommandParser.h
# End Source File
# Begin Source File

SOURCE=.\Invoker.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\Screen.h
# End Source File
# Begin Source File

SOURCE=.\SimpleCalculator.h
# End Source File
# Begin Source File

SOURCE=.\SimpleCommandParser.h
# End Source File
# Begin Source File

SOURCE=.\SimpleScreen.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\StrToDig.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\CalculatorCommandPattern.ico
# End Source File
# Begin Source File

SOURCE=.\res\CalculatorCommandPattern.rc2
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
