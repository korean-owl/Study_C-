#pragma once
class CMyString
{
private:
	char* m_pszData;
	int m_nLength;

public:
	CMyString();
	// ���������
	CMyString(const CMyString& other);
	~CMyString();
	// ���� ������
	CMyString& operator=(const CMyString& other);


	void SetString(const char* pszParam, const int Length);
	const char* GetString(const int Length);
	void Release(void);
};

