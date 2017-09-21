// CourseTipDlg.cpp : implementation file
//

#include "stdafx.h"
#include "p07016221_5.h"
#include "CourseTipDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCourseTipDlg dialog


CCourseTipDlg::CCourseTipDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCourseTipDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCourseTipDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CCourseTipDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCourseTipDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CCourseTipDlg, CDialog)
	//{{AFX_MSG_MAP(CCourseTipDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCourseTipDlg message handlers
