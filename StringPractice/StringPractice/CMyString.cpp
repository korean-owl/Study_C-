#include "CMyString.h"
#include <iostream>
#include <cstring>

#define MAXLENGTH 10 
/*
	char* m_pszData;
	int m_nLength;
*/
using namespace std;


CMyString::CMyString()
	:	m_pszData(NULL),m_nLength(0)
{
	cout << "���� �Ϸ� " << endl;
}
CMyString:: CMyString(const CMyString& other)
	: m_pszData(NULL), m_nLength(0)
{
	//NULL Check
	if (m_pszData != NULL)
	{
		delete[] m_pszData;
	}
	m_pszData = new char[other.m_nLength + 1];
	strncpy_s(m_pszData, other.m_nLength, other.m_pszData, other.m_nLength);
	m_pszData[other.m_nLength] = '\0';
	m_nLength = other.m_nLength;
}
CMyString:: ~CMyString()
{
	delete[] m_pszData;
	cout << "CMyString�� �Ҹ�" << endl;
}
// ���� ������
CMyString& CMyString::operator=(const CMyString& other)
{
	if (this == &other)
	{
		return *this;
	}
	if(m_pszData != NULL) delete[] m_pszData;
	m_pszData = new char[other.m_nLength + 1];
	strncpy_s(m_pszData, other.m_nLength + 1, other.m_pszData, other.m_nLength);
	m_pszData[other.m_nLength] = '\0';
	m_nLength = other.m_nLength;
	return *this;
}

void CMyString::  SetString(const char* pszParam, const int Length)
{
	if(Length < MAXLENGTH)
	{
		if (m_pszData != NULL) delete[] m_pszData;
		m_pszData = new char[Length + 1];
		strncpy_s(m_pszData, Length + 1, pszParam, Length);
		m_pszData[Length] = '\0';
		m_nLength = Length;

	}
	else
	{
		std:: cout << "CMyString:: SetString ���� �����÷ο� ���� �߻�"<< std:: endl;
		//Error
	}
}

const char* CMyString::GetString(const int Length)
{
	if (Length == m_nLength)
	{
		//cout << "m_pszData : " << m_pszData << endl;
		return m_pszData;
	}
	return NULL;

}

void CMyString:: Release(void)
{
	if (m_pszData != NULL) delete[] m_pszData;
	m_pszData = NULL;
	m_nLength = 0;
}