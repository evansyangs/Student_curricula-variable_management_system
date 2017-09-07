#if !defined(AFX_IDDLG_H__49A74603_9215_4F62_A8F8_ADA427F759F0__INCLUDED_)
#define AFX_IDDLG_H__49A74603_9215_4F62_A8F8_ADA427F759F0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// IDDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CIDDlg dialog
#include "P07016221_5Doc.h"

class CIDDlg : public CDialog
{
// Construction
public:
	CP07016221_5Doc* mpDoc;
	CIDDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CIDDlg)
	enum { IDD = IDD_ID_DLG };
	CComboBox	m_IDBox;
	CString	m_ID;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CIDDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CIDDlg)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IDDLG_H__49A74603_9215_4F62_A8F8_ADA427F759F0__INCLUDED_)
