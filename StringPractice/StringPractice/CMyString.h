#pragma once
class CMyString
{
private:
	char* m_pszData;
	int m_nLength;

public:
	CMyString();
	// 복사생성자
	CMyString(const CMyString& other);
	~CMyString();
	// 대입 연산자
	CMyString& operator=(const CMyString& other);


	void SetString(const char* pszParam, const int Length);
	const char* GetString(const int Length);
	void Release(void);
};

