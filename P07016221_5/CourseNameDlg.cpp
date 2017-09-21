// CourseNameDlg.cpp : implementation file
//

#include "stdafx.h"
#include "p07016221_5.h"
#include "CourseNameDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCourseNameDlg dialog
#include "P07016221_5Doc.h"


CCourseNameDlg::CCourseNameDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCourseNameDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCourseNameDlg)
	m_ID = _T("");
	m_CourseID = 0;
	//}}AFX_DATA_INIT
}


void CCourseNameDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCourseNameDlg)
	DDX_Control(pDX, IDC_ID_COMBOX, m_IDBox);
	DDX_CBString(pDX, IDC_ID_COMBOX, m_ID);
	DDX_Text(pDX, IDC_COURSEID, m_CourseID);
	DDV_MinMaxInt(pDX, m_CourseID, 1, 4);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CCourseNameDlg, CDialog)
	//{{AFX_MSG_MAP(CCourseNameDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCourseNameDlg message handlers

BOOL CCourseNameDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();

	CString Str;
	for(int i=0; i<mpDoc->mStudentArray.GetSize();i++)
	{
		Str.Format("%d",mpDoc->mStudentArray[i]->mID);
		m_IDBox.AddString(Str);
	}
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
