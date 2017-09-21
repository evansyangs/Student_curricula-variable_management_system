// SignupDlg.cpp : implementation file
//

#include "stdafx.h"
#include "p07016221_5.h"
#include "SignupDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSignupDlg dialog


CSignupDlg::CSignupDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSignupDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSignupDlg)
	m_Address = _T("");
	m_Class = 0;
	m_Date = COleDateTime::GetCurrentTime();
	m_ID = 0;
	m_Name = _T("");
	m_Tel = _T("");
	//}}AFX_DATA_INIT
}


void CSignupDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSignupDlg)
	DDX_Text(pDX, IDC_ADDRESS, m_Address);
	DDX_Text(pDX, IDC_CLASS, m_Class);
	DDV_MinMaxInt(pDX, m_Class, 1, 3);
	DDX_DateTimeCtrl(pDX, IDC_DATE, m_Date);
	DDX_Text(pDX, IDC_ID, m_ID);
	DDX_Text(pDX, IDC_NAME, m_Name);
	DDX_Text(pDX, IDC_TEL, m_Tel);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSignupDlg, CDialog)
	//{{AFX_MSG_MAP(CSignupDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSignupDlg message handlers
