#pragma once
class CTestData
{
private:

	int m_nData = 0;
public:
	//operator
	explicit operator int(void);
	//������, �Ҹ���
	CTestData();
	explicit CTestData(int nParam);
	CTestData(const CTestData & other);
	~CTestData();

	// Funtion
	//�ڿ� const�� ���� ��ü�� ���� X�Ѵٴ� �� 
	int GetData()const;
	void SetData(int nParam);



};

