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
#include "IDDlg.h"

/////////////////////////////////////////////////////////////////////////////
// CP07016221_5Doc

IMPLEMENT_DYNCREATE(CP07016221_5Doc, CDocument)

BEGIN_MESSAGE_MAP(CP07016221_5Doc, CDocument)
	//{{AFX_MSG_MAP(CP07016221_5Doc)
	ON_COMMAND(ID_INPUT_SIGNUP, OnInputSignup)
	ON_COMMAND(ID_INPUT_EDIT, OnInputEdit)
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
	mStudentArray.Serialize(ar);
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
	//��ʾ���˴��ɶԶԻ���ռ������Ա������ʼ��
	Dlg.m_ID = 10000;
	for(int i=0; i<mStudentArray.GetSize();i++)
		if(mStudentArray[i]->mID>Dlg.m_ID)
			Dlg.m_ID = mStudentArray[i]->mID;
	Dlg.m_ID++;
	Dlg.m_Name = "Zhangsan";
	if(Dlg.DoModal() == IDOK)
	{
		CStudent* pStudent = new CStudent;
		//��new����CStudent����
		pStudent->mAddress = Dlg.m_Address;
		pStudent->mClass = Dlg.m_Class;
		pStudent->mDate = Dlg.m_Date;
		pStudent->mID = Dlg.m_ID;
		pStudent->mTel = Dlg.m_Tel;
		pStudent->mName = Dlg.m_Name;
		//����6�н����ݽ��Ի�������������ݸ�ֵ��CStudent��Ӧ�ĳ�Ա����
		mStudentArray.Add(pStudent);
		//�������ɵ�CStudent�������CStudent��������
	}	
}

void CP07016221_5Doc::OnInputEdit() 
{
	// TODO: Add your command handler code here
	int Count = mStudentArray.GetSize();
	if(Count==0)
		return;

	CIDDlg IDDlg;
	IDDlg.mpDoc = this;
	if(IDDlg.DoModal() == IDOK)
	{
		for(int i=0; i<Count;i++)
			if(mStudentArray[i]->mID == atoi(IDDlg.m_ID))
			{
				CSignupDlg Dlg;
				CStudent* pStudent = mStudentArray[i];
				Dlg.m_ID = pStudent->mID;
				Dlg.m_Name = pStudent->mName;
				Dlg.m_Date = pStudent->mDate;
				Dlg.m_Address = pStudent->mAddress;
				Dlg.m_Class = pStudent->mClass;
				Dlg.m_Tel = pStudent->mTel;
				if(Dlg.DoModal()==IDOK)
				{
					pStudent->mAddress = Dlg.m_Address;
					pStudent->mClass = Dlg.m_Class;
					pStudent->mDate = Dlg.m_Date;
					pStudent->mID = Dlg.m_ID;
					pStudent->mTel = Dlg.m_Tel;
					pStudent->mName = Dlg.m_Name;
				}
			}
	}	
}
