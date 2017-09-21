// Course.h: interface for the CCourse class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_COURSE_H__E2A9D6FB_CECB_4392_A6DE_F5488E7D058D__INCLUDED_)
#define AFX_COURSE_H__E2A9D6FB_CECB_4392_A6DE_F5488E7D058D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CCourse : public CObject  
{
	DECLARE_SERIAL(CCourse)
public:
	void Serialize(CArchive &ar);
	int mCourseID;//课程编号
	CString mCourseName;//课程名称
	int mCredit;//学分
	int mTerm;//学期
	CString mClassroom;//教室
	int mGrade;//成绩

	CCourse();
	virtual ~CCourse();

};

#endif // !defined(AFX_COURSE_H__E2A9D6FB_CECB_4392_A6DE_F5488E7D058D__INCLUDED_)
