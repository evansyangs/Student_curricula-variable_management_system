// Student.h: interface for the CStudent class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STUDENT_H__C2BBBE87_D8B5_4168_8E83_28FEDE3DDDA4__INCLUDED_)
#define AFX_STUDENT_H__C2BBBE87_D8B5_4168_8E83_28FEDE3DDDA4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Course.h"

class CStudent : public CObject  
{
public:
	int mID;//学号
	CString mName;//姓名
	int mClass;//班级
	CString mTel;//电话
	COleDateTime mDate;//生日
	CString mAddress;//地址
	CTypedPtrArray<CObArray, CCourse*> mCourseArray;//选课数据集

	CStudent();
	virtual ~CStudent();

};

#endif // !defined(AFX_STUDENT_H__C2BBBE87_D8B5_4168_8E83_28FEDE3DDDA4__INCLUDED_)
