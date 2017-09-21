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

#include "SignupDlg.h"
#include "IDDlg.h"
#include "CourseDlg.h"
#include "CourseNameDlg.h"
#include "Error.h"
#include "CourseTipDlg.h"

/////////////////////////////////////////////////////////////////////////////
// CP07016221_5Doc

IMPLEMENT_DYNCREATE(CP07016221_5Doc, CDocument)

BEGIN_MESSAGE_MAP(CP07016221_5Doc, CDocument)
	//{{AFX_MSG_MAP(CP07016221_5Doc)
	ON_COMMAND(ID_INPUT_SIGNUP, OnInputSignup)
	ON_COMMAND(ID_INPUT_EDIT, OnInputEdit)
	ON_COMMAND(ID_INPUT_COURSE, OnInputCourse)
	ON_COMMAND(ID_INPUT_DELETE, OnInputDelete)
	ON_COMMAND(ID_COURSE_EDIT, OnCourseEdit)
	ON_COMMAND(ID_COURSE_DELETE, OnCourseDelete)
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
	mStudentArray.Serialize(ar);
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

void CP07016221_5Doc::OnInputSignup() 
{
	// TODO: Add your command handler code here
	CSignupDlg Dlg;
	//提示，此处可对对话框空间关联成员变量初始化
	Dlg.m_ID = 10000;
	for(int i=0; i<mStudentArray.GetSize();i++)
		if(mStudentArray[i]->mID>Dlg.m_ID)
			Dlg.m_ID = mStudentArray[i]->mID;
	Dlg.m_ID++;
	Dlg.m_Name = "梅海峰";
	Dlg.m_Tel = "13621560769";
	Dlg.m_Address = "南京";
	if(Dlg.DoModal() == IDOK)
	{
		CStudent* pStudent = new CStudent;
		//用new生成CStudent对象
		pStudent->mAddress = Dlg.m_Address;
		pStudent->mClass = Dlg.m_Class;
		pStudent->mDate = Dlg.m_Date;
		pStudent->mID = Dlg.m_ID;
		pStudent->mTel = Dlg.m_Tel;
		pStudent->mName = Dlg.m_Name;
		//以上6行将数据将对话框内输入的数据赋值给CStudent相应的成员变量
		mStudentArray.Add(pStudent);
		//将新生成的CStudent对象加入CStudent集合类中
		//UpdateAllViews(NULL);
	}	
}

void CP07016221_5Doc::OnInputEdit() 
{
	// TODO: Add your command handler code here
	int Count = mStudentArray.GetSize();
	if(Count==0)
		return;

	CIDDlg IDDlg;
	IDDlg.mpDoc = this;
	if(IDDlg.DoModal() == IDOK)
	{
		for(int i=0; i<Count;i++)
			if(mStudentArray[i]->mID == atoi(IDDlg.m_ID))
			{
				CSignupDlg Dlg;
				CStudent* pStudent = mStudentArray[i];
				Dlg.m_ID = pStudent->mID;
				Dlg.m_Name = pStudent->mName;
				Dlg.m_Date = pStudent->mDate;
				Dlg.m_Address = pStudent->mAddress;
				Dlg.m_Class = pStudent->mClass;
				Dlg.m_Tel = pStudent->mTel;
				if(Dlg.DoModal()==IDOK)
				{

					pStudent->mAddress = Dlg.m_Address;
					pStudent->mClass = Dlg.m_Class;
					pStudent->mDate = Dlg.m_Date;
					pStudent->mID = Dlg.m_ID;
					pStudent->mTel = Dlg.m_Tel;
					pStudent->mName = Dlg.m_Name;
				}
			}
	}	
}

void CP07016221_5Doc::OnInputCourse() 
{
	int Count = mStudentArray.GetSize();
	if(Count==0)
		return;
	// TODO: Add your command handler code here
	CIDDlg IDDlg;
	IDDlg.mpDoc = this;
	//提示，此处可对对话框空间关联成员变量初始化
	if(IDDlg.DoModal() == IDOK)
	{
		for(int i=0; i<Count;i++)
		{
			if(mStudentArray[i]->mID == atoi(IDDlg.m_ID))
			{
				CCourseTipDlg TipDlg;
				if(TipDlg.DoModal() == IDOK)
				{
					CCourseDlg Dlg;
					Dlg.m_CourseID = 1;
					Dlg.m_Name = mStudentArray[i]->mName;
					Dlg.m_Classroom="J3-104";
					Dlg.m_CourseName="程序设计";
					if(Dlg.DoModal() == IDOK)
					{
						CCourse* pCourse = new CCourse;
						//用new生成CCourse对象
						for(int k=0;k<mStudentArray[i]->mCourseArray.GetSize();k++)
						{
							if(mStudentArray[i]->mCourseArray[k]->mCourseID==Dlg.m_CourseID)
							{
								CError Dlg;
								Dlg.DoModal();
								return;
							}
						}
						pCourse->mCourseID = Dlg.m_CourseID;
						if(pCourse->mCourseID==1)
						{
							pCourse->mClassroom = "J3-104";
							pCourse->mCourseName="程序设计";
							pCourse->mCredit=2;
							pCourse->mTerm=3;
						}
						else if(pCourse->mCourseID==2)
						{
							pCourse->mClassroom = "J2-202";
							pCourse->mCourseName="高等代数";
							pCourse->mCredit=4;
							pCourse->mTerm=1;
						}
						else if(pCourse->mCourseID==3)
						{
							pCourse->mClassroom = "J4-301";
							pCourse->mCourseName="解析几何";
							pCourse->mCredit=3;
							pCourse->mTerm=2;
						}
						else
						{
							pCourse->mClassroom = "J6-102";
							pCourse->mCourseName="数学分析";
							pCourse->mCredit=5;
							pCourse->mTerm=3;
						}
						pCourse->mGrade = Dlg.m_Grade;
						//以上6行将数据将对话框内输入的数据赋值给CCourse相应的成员变量
						mStudentArray[i]->mCourseArray.Add(pCourse);
						//将新生成的CCourse对象加入CCourse集合类中
					}
					break;
				}
			}
		}
	}
}

void CP07016221_5Doc::OnInputDelete() 
{
	// TODO: Add your command handler code here
	int Count = mStudentArray.GetSize();
	if(Count==0)
		return;

	CIDDlg IDDlg;
	IDDlg.mpDoc = this;
	if(IDDlg.DoModal() == IDOK)
	{
		for(int i=0; i<Count;i++)
		{
			if(mStudentArray[i]->mID == atoi(IDDlg.m_ID))
			{
				delete mStudentArray[i];
				mStudentArray.RemoveAt(i);
				return;
			}
		}
	}	
}

void CP07016221_5Doc::OnCourseEdit() 
{
	int Count1 = mStudentArray.GetSize();
	if(Count1==0)
		return;
	CCourseNameDlg IDDlg;
	IDDlg.mpDoc = this;
	if(IDDlg.DoModal() == IDOK)
	{
		for(int i=0; i<Count1;i++)
		{
			if(mStudentArray[i]->mID == atoi(IDDlg.m_ID))
			{
				int Count2 = mStudentArray[i]->mCourseArray.GetSize();
				if(Count2==0)
					return;
				for(int j=0;j<Count2;j++)
				{
					if(mStudentArray[i]->mCourseArray[j]->mCourseID == IDDlg.m_CourseID)
					{
						CCourseTipDlg TipDlg;
						if(TipDlg.DoModal() == IDOK)
						{			
							CCourseDlg Dlg;
							CCourse* pCourse = mStudentArray[i]->mCourseArray[j];
							Dlg.m_Name = mStudentArray[i]->mName;
							Dlg.m_Classroom = pCourse->mClassroom;
							Dlg.m_CourseID = pCourse->mCourseID;
							Dlg.m_CourseName = pCourse->mCourseName;
							Dlg.m_Credit = pCourse->mCredit;
							Dlg.m_Grade = pCourse->mGrade;
							Dlg.m_Term = pCourse->mTerm;
							if(Dlg.DoModal() == IDOK)
							{
								pCourse->mCourseID = Dlg.m_CourseID;
								if(pCourse->mCourseID==1)
								{
									pCourse->mClassroom = "J3-104";
									pCourse->mCourseName="程序设计";
									pCourse->mCredit=2;
									pCourse->mTerm=3;
								}
								else if(pCourse->mCourseID==2)
								{
									pCourse->mClassroom = "J2-202";
									pCourse->mCourseName="高等代数";
									pCourse->mCredit=4;
									pCourse->mTerm=1;
								}
								else if(pCourse->mCourseID==3)
								{
									pCourse->mClassroom = "J4-301";
									pCourse->mCourseName="解析几何";
									pCourse->mCredit=3;
									pCourse->mTerm=2;
								}
								else
								{
									pCourse->mClassroom = "J6-102";
									pCourse->mCourseName="数学分析";
									pCourse->mCredit=5;
									pCourse->mTerm=3;
								}
								pCourse->mGrade = Dlg.m_Grade;
							}
							break;
						}
					}
					if(j==Count2-1)
					{
						CError Dlg;
						Dlg.DoModal();
					}
				}
			}
		}
	}	
}

void CP07016221_5Doc::OnCourseDelete() 
{
	// TODO: Add your command handler code here
	int Count1 = mStudentArray.GetSize();
	if(Count1==0)
		return;
	CCourseNameDlg IDDlg;
	IDDlg.mpDoc = this;
	if(IDDlg.DoModal() == IDOK)
	{
		for(int i=0; i<Count1;i++)
		{
			if(mStudentArray[i]->mID == atoi(IDDlg.m_ID))
			{
				int Count2 = mStudentArray[i]->mCourseArray.GetSize();
				if(Count2==0)
					return;
				for(int j=0;j<Count2;j++)
				{
					if(mStudentArray[i]->mCourseArray[j]->mCourseID == IDDlg.m_CourseID)
					{
						delete mStudentArray[i]->mCourseArray[j];
						mStudentArray[i]->mCourseArray.RemoveAt(j);
						return;
					}
				}
			}
		}
	}	
}

//DEL void CP07016221_5Doc::OnClose() 
//DEL {
//DEL 	// TODO: Add your message handler code here and/or call default
//DEL 	CDocument::SetModifiedFlag();  
//DEL 	CDocument::IsModified();  
//DEL 	CDocument::SaveModified();
//DEL 	CDocument::OnClose();
//DEL }
