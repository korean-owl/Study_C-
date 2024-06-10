#pragma once

class CMyString {
private:
    char* m_pszData;
    int m_nLength;

public:
    CMyString();
    CMyString(const char* pszParam);
    CMyString(const CMyString& other);
    ~CMyString();
    CMyString& operator=(const CMyString& other);
    operator const char* () const;

    void SetString(const char* pszParam);
    const char* GetString() const;
    void Release();
    int GetLength() const;
};
