// P07016221_5View.h : interface of the CP07016221_5View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_P07016221_5VIEW_H__9ABBED8B_CD0B_4551_8AF2_D8EEBCF44E94__INCLUDED_)
#define AFX_P07016221_5VIEW_H__9ABBED8B_CD0B_4551_8AF2_D8EEBCF44E94__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CP07016221_5View : public CListView
{
protected: // create from serialization only
	CP07016221_5View();
	DECLARE_DYNCREATE(CP07016221_5View)

// Attributes
public:
	CP07016221_5Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CP07016221_5View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CP07016221_5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CP07016221_5View)
	afx_msg void OnOutputSignup();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in P07016221_5View.cpp
inline CP07016221_5Doc* CP07016221_5View::GetDocument()
   { return (CP07016221_5Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_P07016221_5VIEW_H__9ABBED8B_CD0B_4551_8AF2_D8EEBCF44E94__INCLUDED_)
