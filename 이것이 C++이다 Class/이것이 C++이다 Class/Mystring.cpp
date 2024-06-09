#include"MyString.h"
#include<iostream>


/*

	CMyString();
	~CMyString();
	int SetString(const char* pszParam, const int Length);
	const char * GetString(const int Length);
	void Release(void);
*/
#define MAXLEGNTH 10

void CMyString :: SetString(const char* pszParam, const int Length)
{
	if (Length < MAXLENGTH)
	{
		m_pszData = new char[Length + 1];
		strncpy(m_pszData, pszParam, Length);
		m_pszData[Length] = '\0';
		m_nLength = Length;
		return 0;
	}
	return -1;
}
const char * CMyString::GetString(const int Length)
{
	if (Length == m_nLength)
	{
		return m_pszData;
	}
	return NULL;
}
void CMyString::Release(void)
{
	delete[] m_pszData;
	m_pszData = NULL;
	m_nLength = 0;
}
//Clas 持失切 
CMyString::CMyString()
	: m_pszData(NULL), m_nLength(0)
{
}
CMyString::CMyString()
{

}
CMyString::~CMyString()
{
	delete[] m_pszData;
}
//差紫持失切
CMyString::CMyString(const CMyString& other)
{
	m_pszData = new char[other.m_nLength + 1];
	strncpy(m_pszData, other.m_pszData, other.m_nLength);
	m_pszData[other.m_nLength] = '\0';
	m_nLength = other.m_nLength;
}

CMyString& CMyString::operator=(const CMyString& other)
{
	if (this == &other)
	{
		return *this;
	}
	delete[] m_pszData;
	m_pszData = new char[other.m_nLength + 1];
	strncpy(m_pszData, other.m_pszData, other.m_nLength);
	m_pszData[other.m_nLength] = '\0';
	m_nLength = other.m_nLength;
	return *this;
}