#include "CMyString.h"
#include <iostream>
#include <cstring>
#include <stdexcept>

#define MAXLENGTH 10 

using namespace std;

CMyString::CMyString()
    : m_pszData(nullptr), m_nLength(0)
{
    cout << "생성 완료 " << endl;
}

CMyString::CMyString(const char* pszParam)
    : m_pszData(nullptr), m_nLength(0)
{
    SetString(pszParam);
}

CMyString::CMyString(const CMyString& other)
    : m_pszData(nullptr), m_nLength(0)
{
    SetString(other.m_pszData);
}

CMyString::~CMyString()
{
    delete[] m_pszData;
    cout << "CMyString이 소멸" << endl;
}

CMyString& CMyString::operator=(const CMyString& other)
{
    if (this == &other) {
        return *this;
    }
    SetString(other.m_pszData);
    return *this;
}

void CMyString::SetString(const char* pszParam)
{
    if (pszParam == nullptr) {
        cout << "NULL Pointer ERROR" << endl;
        //Error
    }

    int length = strlen(pszParam);
    if (length > MAXLENGTH) {
        cout << "String Length OverFlow Error" << endl;
        //Error
    }
    if (length > 0)
    {
        if (m_pszData != nullptr) delete[] m_pszData;
        m_pszData = new char[length + 1];
        if (length > 0)
        strncpy_s(m_pszData, length + 1, pszParam, length);
        m_pszData[length] = '\0';
        m_nLength = length;
    }
    else
    {
        cout << "입력된게 없습니다." << endl;
    }
}

const char* CMyString::GetString() const
{
    return m_pszData;
}

void CMyString::Release()
{
    if (m_pszData != nullptr) delete[] m_pszData;
    m_pszData = nullptr;
    m_nLength = 0;
}

int CMyString::GetLength() const
{
    return m_nLength;
}

CMyString::operator const char* () const
{
    return m_pszData;
}
