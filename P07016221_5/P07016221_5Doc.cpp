// P07016221_5Doc.cpp : implementation of the CP07016221_5Doc class
//

#include "stdafx.h"
#include "P07016221_5.h"

#include "P07016221_5Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

#include "SignupDlg.h"

/////////////////////////////////////////////////////////////////////////////
// CP07016221_5Doc

IMPLEMENT_DYNCREATE(CP07016221_5Doc, CDocument)

BEGIN_MESSAGE_MAP(CP07016221_5Doc, CDocument)
	//{{AFX_MSG_MAP(CP07016221_5Doc)
	ON_COMMAND(ID_INPUT_SIGNUP, OnInputSignup)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CP07016221_5Doc construction/destruction

CP07016221_5Doc::CP07016221_5Doc()
{
	// TODO: add one-time construction code here

}

CP07016221_5Doc::~CP07016221_5Doc()
{
}

BOOL CP07016221_5Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CP07016221_5Doc serialization

void CP07016221_5Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CP07016221_5Doc diagnostics

#ifdef _DEBUG
void CP07016221_5Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CP07016221_5Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CP07016221_5Doc commands

void CP07016221_5Doc::OnInputSignup() 
{
	// TODO: Add your command handler code here
	CSignupDlg Dlg;
	//提示，此处可对对话框空间关联成员变量初始化
	if(Dlg.DoModal() == IDOK)
	{
		CStudent* pStudent = new CStudent;
		//用new生成CSportMan对象
		pStudent->mAddress = Dlg.m_Address;
		pStudent->mClass = Dlg.m_Class;
		pStudent->mDate = Dlg.m_Date;
		pStudent->mID = Dlg.m_ID;
		pStudent->mTel = Dlg.m_Tel;
		pStudent->mName = Dlg.m_Name;
		//以上5行将数据将对话框内输入的数据赋值给CSportMan相应的成员变量
		mStudentArray.Add(pStudent);
		//将新生成的CSportMan对象加入CSportMan集合类中
	}	
}
