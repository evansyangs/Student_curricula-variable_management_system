#if !defined(AFX_SIGNUPDLG_H__CE80A97C_F235_404B_A49E_CE56A5B87FB8__INCLUDED_)
#define AFX_SIGNUPDLG_H__CE80A97C_F235_404B_A49E_CE56A5B87FB8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SignupDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSignupDlg dialog

class CSignupDlg : public CDialog
{
// Construction
public:
	CSignupDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSignupDlg)
	enum { IDD = IDD_SIGNUP };
	CString	m_Address;
	int		m_Class;
	COleDateTime	m_Date;
	int		m_ID;
	CString	m_Name;
	CString	m_Tel;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSignupDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSignupDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SIGNUPDLG_H__CE80A97C_F235_404B_A49E_CE56A5B87FB8__INCLUDED_)
