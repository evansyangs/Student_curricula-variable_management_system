// P07016221_5View.cpp : implementation of the CP07016221_5View class
//

#include "stdafx.h"
#include "P07016221_5.h"

#include "P07016221_5Doc.h"
#include "P07016221_5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CP07016221_5View

IMPLEMENT_DYNCREATE(CP07016221_5View, CListView)

BEGIN_MESSAGE_MAP(CP07016221_5View, CListView)
	//{{AFX_MSG_MAP(CP07016221_5View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CListView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CListView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CListView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CP07016221_5View construction/destruction

CP07016221_5View::CP07016221_5View()
{
	// TODO: add construction code here

}

CP07016221_5View::~CP07016221_5View()
{
}

BOOL CP07016221_5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CListView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CP07016221_5View drawing

void CP07016221_5View::OnDraw(CDC* pDC)
{
	CP07016221_5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

void CP07016221_5View::OnInitialUpdate()
{
	CListView::OnInitialUpdate();


	// TODO: You may populate your ListView with items by directly accessing
	//  its list control through a call to GetListCtrl().
}

/////////////////////////////////////////////////////////////////////////////
// CP07016221_5View printing

BOOL CP07016221_5View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CP07016221_5View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CP07016221_5View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CP07016221_5View diagnostics

#ifdef _DEBUG
void CP07016221_5View::AssertValid() const
{
	CListView::AssertValid();
}

void CP07016221_5View::Dump(CDumpContext& dc) const
{
	CListView::Dump(dc);
}

CP07016221_5Doc* CP07016221_5View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CP07016221_5Doc)));
	return (CP07016221_5Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CP07016221_5View message handlers
