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
	ON_COMMAND(ID_OUTPUT_SIGNUP, OnOutputSignup)
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
	cs.style |= LVS_SHOWSELALWAYS | LVS_REPORT;
	//以上代码用于使视图呈列表显示
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

void CP07016221_5View::OnOutputSignup() 
{
	// TODO: Add your command handler code here
	CListCtrl& ListCtrl = GetListCtrl();//得到CListView中的封装的控件CListCtrl 
	while(ListCtrl.DeleteColumn(0)){};
	ListCtrl.DeleteAllItems();
	//以上2行代码用于清除原有的显示
	ListCtrl.InsertColumn(0,"学号");
	ListCtrl.SetColumnWidth(0,100);
	//以上2行代码用于插入表头
	ListCtrl.InsertColumn(1,"姓名");
	ListCtrl.SetColumnWidth(1,100);
	ListCtrl.InsertColumn(2,"班级");
	ListCtrl.SetColumnWidth(2,100);
	ListCtrl.InsertColumn(3,"电话");
	ListCtrl.SetColumnWidth(3,100);
	ListCtrl.InsertColumn(4,"生日");
	ListCtrl.SetColumnWidth(4,100);
	ListCtrl.InsertColumn(5,"住址");
	ListCtrl.SetColumnWidth(5,100);

	int i,j,Index;
	CString Str;
	CStudent* pStudent = NULL;
	CP07016221_5Doc* pDoc = GetDocument(); //得到文档
	Index = 0;
	for(i = 0;i < pDoc->mStudentArray.GetSize();i++)	//遍历所有学生
	{
		pStudent = pDoc->mStudentArray[i];
		Str.Format("%d",pStudent->mID); 	//将整数格式化为字符串
		Index = ListCtrl.InsertItem(Index,Str); //在表中插入一行
		j = 1;

		Str.Format("%s",pStudent->mName); //将字符串格式化为字符串
		ListCtrl.SetItem(Index,j,LVIF_TEXT,Str,0,0,0,NULL); //后面的单元格填充
		j++;

		Str.Format("%d",pStudent->mClass); 	//将整数格式化为字符串
		ListCtrl.SetItem(Index,j,LVIF_TEXT,Str,0,0,0,NULL); //后面的单元格填充
		j++;

		Str.Format("%s",pStudent->mTel); //将字符串格式化为字符串
		ListCtrl.SetItem(Index,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%d-%d",pStudent->mDate.GetYear(),pStudent->mDate.GetMonth());
		ListCtrl.SetItem(Index,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pStudent->mAddress); //将字符串格式化为字符串
		ListCtrl.SetItem(Index,j,LVIF_TEXT,Str,0,0,0,NULL);
		Index++;
	}
}
