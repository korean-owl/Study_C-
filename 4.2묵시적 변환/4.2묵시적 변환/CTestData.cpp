#include "CTestData.h"
#include <iostream>

using namespace std;

#define MAXNUM 30

CTestData::CTestData()
{
	cout << "CTestData(void)" << endl;
}
//explicit 헤더 묵시적 선언 금지-> 형 변환을 통한 새로운 객체 생성 X
 CTestData:: CTestData(const int nParam) : m_nData(nParam)
{
	cout << "CTestData(int)" << endl;
}
CTestData::CTestData(const CTestData & other) : m_nData(other.m_nData)
{
	cout << "CTestData(CTestData)" << endl;
}
CTestData::~CTestData()
{
	cout << "~CTestData()" << endl;
}
int CTestData::GetData()const
{
	cout << m_nData << endl;
		return m_nData;
	// return Error;
}
void CTestData::SetData(int nParam)
{
	if (nParam <= MAXNUM)
	{
		m_nData = nParam;
	}
}

CTestData:: operator int (void) 
{
	return m_nData;
}
