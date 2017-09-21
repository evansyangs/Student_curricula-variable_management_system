; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CCourseDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "p07016221_5.h"
LastPage=0

ClassCount=10
Class1=CCourseDlg
Class2=CCourseNameDlg
Class3=CError
Class4=CIDDlg
Class5=CMainFrame
Class6=CP07016221_5App
Class7=CAboutDlg
Class8=CP07016221_5Doc
Class9=CP07016221_5View
Class10=CSignupDlg

ResourceCount=8
Resource1=IDD_ERROR
Resource2=IDD_SIGNUP
Resource3=IDD_COURSE_ID
Resource4=IDD_COURSE
Resource5=IDR_MAINFRAME
Resource6=IDD_ID_DLG
Resource7=IDD_ABOUTBOX
Resource8=IDD_COURSE_TIPS

[CLS:CCourseDlg]
Type=0
BaseClass=CDialog
HeaderFile=CourseDlg.h
ImplementationFile=CourseDlg.cpp
Filter=D
VirtualFilter=dWC

[CLS:CCourseNameDlg]
Type=0
BaseClass=CDialog
HeaderFile=CourseNameDlg.h
ImplementationFile=CourseNameDlg.cpp
LastObject=CCourseNameDlg
Filter=D
VirtualFilter=dWC

[CLS:CError]
Type=0
BaseClass=CDialog
HeaderFile=Error.h
ImplementationFile=Error.cpp
LastObject=CError

[CLS:CIDDlg]
Type=0
BaseClass=CDialog
HeaderFile=IDDlg.h
ImplementationFile=IDDlg.cpp

[CLS:CMainFrame]
Type=0
BaseClass=CFrameWnd
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
VirtualFilter=fWC

[CLS:CP07016221_5App]
Type=0
BaseClass=CWinApp
HeaderFile=P07016221_5.h
ImplementationFile=P07016221_5.cpp

[CLS:CAboutDlg]
Type=0
BaseClass=CDialog
HeaderFile=P07016221_5.cpp
ImplementationFile=P07016221_5.cpp

[CLS:CP07016221_5Doc]
Type=0
BaseClass=CDocument
HeaderFile=P07016221_5Doc.h
ImplementationFile=P07016221_5Doc.cpp
Filter=W
VirtualFilter=DC

[CLS:CP07016221_5View]
Type=0
BaseClass=CListView
HeaderFile=P07016221_5View.h
ImplementationFile=P07016221_5View.cpp

[CLS:CSignupDlg]
Type=0
BaseClass=CDialog
HeaderFile=SignupDlg.h
ImplementationFile=SignupDlg.cpp
Filter=D
VirtualFilter=dWC

[DLG:IDD_COURSE]
Type=1
Class=CCourseDlg
ControlCount=16
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_COURSEID,edit,1350631552
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_CREDIT,edit,1350633600
Control8=IDC_STATIC,static,1342308352
Control9=IDC_TERM,edit,1350633600
Control10=IDC_STATIC,static,1342308352
Control11=IDC_CLASSROOM,edit,1350633600
Control12=IDC_STATIC,static,1342308352
Control13=IDC_GRADE,edit,1350631552
Control14=IDC_STATIC,static,1342308352
Control15=IDC_NAME,edit,1350633600
Control16=IDC_COURSENAME,combobox,1344340226

[DLG:IDD_COURSE_ID]
Type=1
Class=CCourseNameDlg
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_ID_COMBOX,combobox,1344340226
Control6=IDC_COURSEID,edit,1350631552

[DLG:IDD_ERROR]
Type=1
Class=CError
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308864

[DLG:IDD_ID_DLG]
Type=1
Class=CIDDlg
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_IDBOX,combobox,1344340226
Control4=IDC_STATIC,static,1342308352

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_SIGNUP]
Type=1
Class=CSignupDlg
ControlCount=14
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_ID,edit,1350633600
Control5=IDC_STATIC,static,1342308352
Control6=IDC_NAME,edit,1350631552
Control7=IDC_STATIC,static,1342308352
Control8=IDC_CLASS,edit,1350631552
Control9=IDC_STATIC,static,1342308352
Control10=IDC_TEL,edit,1350631552
Control11=IDC_STATIC,static,1342308352
Control12=IDC_STATIC,static,1342308352
Control13=IDC_ADDRESS,edit,1350631552
Control14=IDC_DATE,SysDateTimePick32,1342242848

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[MNU:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_INPUT_SIGNUP
Command11=ID_INPUT_EDIT
Command12=ID_INPUT_DELETE
Command13=ID_INPUT_COURSE
Command14=ID_COURSE_EDIT
Command15=ID_COURSE_DELETE
Command16=ID_OUTPUT_SIGNUP
Command17=ID_OUTPUT_SEARCH
Command18=ID_APP_ABOUT
CommandCount=18

[ACL:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[DLG:IDD_COURSE_TIPS]
Type=1
Class=?
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352

