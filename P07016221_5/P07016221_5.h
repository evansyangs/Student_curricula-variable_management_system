// P07016221_5.h : main header file for the P07016221_5 application
//

#if !defined(AFX_P07016221_5_H__64E28E50_499D_49CD_8A5F_1CFDC34D9A91__INCLUDED_)
#define AFX_P07016221_5_H__64E28E50_499D_49CD_8A5F_1CFDC34D9A91__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CP07016221_5App:
// See P07016221_5.cpp for the implementation of this class
//

class CP07016221_5App : public CWinApp
{
public:
	CP07016221_5App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CP07016221_5App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CP07016221_5App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_P07016221_5_H__64E28E50_499D_49CD_8A5F_1CFDC34D9A91__INCLUDED_)
