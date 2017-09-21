// CourseDlg.cpp : implementation file
//

#include "stdafx.h"
#include "p07016221_5.h"
#include "CourseDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCourseDlg dialog


CCourseDlg::CCourseDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCourseDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCourseDlg)
	m_CourseID = 0;
	m_Credit = 0;
	m_Grade = 0;
	m_Term = 0;
	m_Name = _T("");
	m_CourseName = _T("");
	m_Classroom = _T("");
	//}}AFX_DATA_INIT
}


void CCourseDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCourseDlg)
	DDX_Text(pDX, IDC_COURSEID, m_CourseID);
	DDX_Text(pDX, IDC_CREDIT, m_Credit);
	DDX_Text(pDX, IDC_GRADE, m_Grade);
	DDV_MinMaxInt(pDX, m_Grade, 0, 100);
	DDX_Text(pDX, IDC_TERM, m_Term);
	DDX_Text(pDX, IDC_NAME, m_Name);
	DDX_CBString(pDX, IDC_COURSENAME, m_CourseName);
	DDX_Text(pDX, IDC_CLASSROOM, m_Classroom);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CCourseDlg, CDialog)
	//{{AFX_MSG_MAP(CCourseDlg)
	ON_CBN_SELENDOK(IDC_COURSENAME, OnSelendokCoursename)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCourseDlg message handlers

void CCourseDlg::OnSelendokCoursename() 
{
	// TODO: Add your control notification handler code here
	
}
