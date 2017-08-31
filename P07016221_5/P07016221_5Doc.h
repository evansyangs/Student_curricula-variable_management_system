// P07016221_5Doc.h : interface of the CP07016221_5Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_P07016221_5DOC_H__D18C9DFD_4B9C_46DE_B03E_6D990A11DD0D__INCLUDED_)
#define AFX_P07016221_5DOC_H__D18C9DFD_4B9C_46DE_B03E_6D990A11DD0D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CP07016221_5Doc : public CDocument
{
protected: // create from serialization only
	CP07016221_5Doc();
	DECLARE_DYNCREATE(CP07016221_5Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CP07016221_5Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CP07016221_5Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CP07016221_5Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_P07016221_5DOC_H__D18C9DFD_4B9C_46DE_B03E_6D990A11DD0D__INCLUDED_)
