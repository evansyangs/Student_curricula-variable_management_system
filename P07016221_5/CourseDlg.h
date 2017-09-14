#if !defined(AFX_COURSEDLG_H__07660C76_FAD1_4BAB_9ED0_17D5D67819B1__INCLUDED_)
#define AFX_COURSEDLG_H__07660C76_FAD1_4BAB_9ED0_17D5D67819B1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CourseDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCourseDlg dialog

class CCourseDlg : public CDialog
{
// Construction
public:
	CCourseDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CCourseDlg)
	enum { IDD = IDD_COURSE };
	int		m_Classroom;
	int		m_CourseID;
	int		m_Credit;
	int		m_Grade;
	int		m_Term;
	CString	m_Name;
	CString	m_CourseName;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCourseDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CCourseDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COURSEDLG_H__07660C76_FAD1_4BAB_9ED0_17D5D67819B1__INCLUDED_)
