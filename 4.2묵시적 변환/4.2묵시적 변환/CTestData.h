#pragma once
class CTestData
{
private:

	int m_nData = 0;
public:
	//operator
	explicit operator int(void);
	//생성자, 소멸자
	CTestData();
	explicit CTestData(int nParam);
	CTestData(const CTestData & other);
	~CTestData();

	// Funtion
	//뒤에 const는 내부 객체를 변동 X한다는 뜻 
	int GetData()const;
	void SetData(int nParam);



};

