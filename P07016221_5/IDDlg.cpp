// IDDlg.cpp : implementation file
//

#include "stdafx.h"
#include "p07016221_5.h"
#include "IDDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CIDDlg dialog


CIDDlg::CIDDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CIDDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CIDDlg)
	m_ID = _T("");
	//}}AFX_DATA_INIT
}


void CIDDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CIDDlg)
	DDX_Control(pDX, IDC_IDBOX, m_IDBox);
	DDX_CBString(pDX, IDC_IDBOX, m_ID);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CIDDlg, CDialog)
	//{{AFX_MSG_MAP(CIDDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CIDDlg message handlers

BOOL CIDDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here

	CString Str;
	for(int i=0; i<mpDoc->mStudentArray.GetSize();i++)
	{
		Str.Format("%d",mpDoc->mStudentArray[i]->mID);
		m_IDBox.AddString(Str);
	}

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
