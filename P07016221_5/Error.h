#if !defined(AFX_ERROR_H__F1C482C8_F5A3_443F_86CB_3FC14C4B72F6__INCLUDED_)
#define AFX_ERROR_H__F1C482C8_F5A3_443F_86CB_3FC14C4B72F6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Error.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CError dialog

class CError : public CDialog
{
// Construction
public:
	CError(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CError)
	enum { IDD = IDD_ERROR };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CError)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CError)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ERROR_H__F1C482C8_F5A3_443F_86CB_3FC14C4B72F6__INCLUDED_)
