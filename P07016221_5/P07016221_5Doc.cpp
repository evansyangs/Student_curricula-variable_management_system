// P07016221_5Doc.cpp : implementation of the CP07016221_5Doc class
//

#include "stdafx.h"
#include "P07016221_5.h"

#include "P07016221_5Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CP07016221_5Doc

IMPLEMENT_DYNCREATE(CP07016221_5Doc, CDocument)

BEGIN_MESSAGE_MAP(CP07016221_5Doc, CDocument)
	//{{AFX_MSG_MAP(CP07016221_5Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CP07016221_5Doc construction/destruction

CP07016221_5Doc::CP07016221_5Doc()
{
	// TODO: add one-time construction code here

}

CP07016221_5Doc::~CP07016221_5Doc()
{
}

BOOL CP07016221_5Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CP07016221_5Doc serialization

void CP07016221_5Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CP07016221_5Doc diagnostics

#ifdef _DEBUG
void CP07016221_5Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CP07016221_5Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CP07016221_5Doc commands
