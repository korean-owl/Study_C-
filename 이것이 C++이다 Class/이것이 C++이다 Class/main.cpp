#include<iostream>
using namespace std;


class USERDATA
{

public:
	int nAge;
	char szName[32];

	void Print(void)
	{
		cout << nAge << szName;
	}

};
// Page 106
class CTest
{

public:
	// ������
/*	CTest()
	{
		m_nData = 10;
	}
*/

	CTest(){}

	//C++ 11 ���ʹ�
	// ������ ���� ����� �ʱ�ȭ�� ���ÿ� �� �� ����
	int m_nData1 = 10, m_nData2 = 20;


	void PrintData(void);
	
};

void CTest::PrintData(void)
{
	cout << "CTest(): ������ �Լ�" << endl;
	cout << m_nData1 << endl;
	cout << m_nData2 << endl;
}


class CMyData
{
private :
	int m_nData;

public:

	int GetData(void) { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }
	
};

class CTest2
{

public:

	CTest2()
	{
		cout << "CTest2�� �����Ǿ����ϴ�." << endl;
	}
	~CTest2()
	{
		cout << "CTest2�� �Ҹ�Ǿ����ϴ�." << endl;
	}

};

class CTest3
{
private:
	int m_nData;

public:

	// ������ ���ÿ� �ʱ�ȭ 
	CTest3(int nParam) : m_nData(nParam)
	{
		cout << "CTest3�� �����Ǿ����ϴ�." << endl;
	}
	~CTest3()
	{
		cout << "CTest3�� �Ҹ�Ǿ����ϴ�." <<m_nData<< endl;
	}

};

class CTest4
{
private:
	int m_nData;
public:
	
	CTest4()
	{
		cout << "CTest4�� �����Ǿ����ϴ�." << endl;
	}
	~CTest4()
	{
		cout << "CTest4�� �Ҹ�Ǿ����ϴ�."  << endl;
	}


	

	void PrintData(void);

};

int main()
{
	CTest t;
	t.PrintData();
	
	CMyData data;
	data.SetData(20);
	cout << data.GetData() << endl;


	//
	//Test 2
	//

	cout << "Test2 : ����" << endl;
	CTest2 t2;



	//
	//Test 3
	//
	cout << "Test3 : ����" << endl;
	CTest3 t3_a(10);
	CTest3 t3_b(20);

	cout << "Test3 : ��" << endl;



	//
	//Test 4
	//

	CTest4* pData = new CTest4;
	cout << "Test 4 " << endl;

	delete pData;
	cout << "End 4 " << endl;

	*pData = new CTest4[3];
	cout << "Test 4 " << endl;

	delete []pData;
	cout << "End 4 " << endl;


	//
	//Test 5
	//

	return 0;
}
