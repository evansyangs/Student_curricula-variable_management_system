// Student.cpp: implementation of the CStudent class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "P07016221_5.h"
#include "Student.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
IMPLEMENT_SERIAL(CStudent,CObject,0)

CStudent::CStudent()
{

}

CStudent::~CStudent()
{

}

void CStudent::Serialize(CArchive &ar)
{
	if(ar.IsStoring())
		{
			ar << mAddress;
			ar << mClass;
			ar << mDate;
			ar << mID;
			ar << mName;
			ar << mTel;
		}
		else
		{
			ar >> mAddress;
			ar >> mClass;
			ar >> mDate;
			ar >> mID;
			ar >> mName;
			ar >> mTel;
		}
		mCourseArray.Serialize(ar);
}
