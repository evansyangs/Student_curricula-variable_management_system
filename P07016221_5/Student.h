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
	int mID;//ѧ��
	CString mName;//����
	int mClass;//�༶
	CString mTel;//�绰
	COleDateTime mDate;//����
	CString mAddress;//��ַ
	CTypedPtrArray<CObArray, CCourse*> mCourseArray;//ѡ�����ݼ�

	CStudent();
	virtual ~CStudent();

};

#endif // !defined(AFX_STUDENT_H__C2BBBE87_D8B5_4168_8E83_28FEDE3DDDA4__INCLUDED_)
