#if !defined(AFX_COURSENAMEDLG_H__41E959B6_CAA8_4CBE_803F_4A2B7EC4D5FD__INCLUDED_)
#define AFX_COURSENAMEDLG_H__41E959B6_CAA8_4CBE_803F_4A2B7EC4D5FD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CourseNameDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCourseNameDlg dialog
#include "P07016221_5Doc.h"

class CCourseNameDlg : public CDialog
{
// Construction
public:
	CP07016221_5Doc* mpDoc;
	CCourseNameDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CCourseNameDlg)
	enum { IDD = IDD_COURSE_ID };
	CComboBox	m_IDBox;
	CString	m_ID;
	int		m_CourseID;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCourseNameDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CCourseNameDlg)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COURSENAMEDLG_H__41E959B6_CAA8_4CBE_803F_4A2B7EC4D5FD__INCLUDED_)
