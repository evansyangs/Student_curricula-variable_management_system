// Course.cpp: implementation of the CCourse class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "P07016221_5.h"
#include "Course.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
IMPLEMENT_SERIAL(CCourse,CObject,0) 

CCourse::CCourse()
{

}

CCourse::~CCourse()
{

}

void CCourse::Serialize(CArchive &ar)
{
	if(ar.IsStoring())
	{
		ar << mClassroom;
		ar << mCourseID;
		ar << mCourseName;
		ar << mCredit;
		ar << mGrade;
		ar << mTerm;
	}
	else
	{
		ar >> mClassroom;
		ar >> mCourseID;
		ar >> mCourseName;
		ar >> mCredit;
		ar >> mGrade;
		ar >> mTerm;
	}
}
