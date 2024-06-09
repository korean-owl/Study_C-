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
	// 생성자
/*	CTest()
	{
		m_nData = 10;
	}
*/

	CTest(){}

	//C++ 11 부터는
	// 생성자 없이 선언과 초기화를 동시에 할 수 있음
	int m_nData1 = 10, m_nData2 = 20;


	void PrintData(void);
	
};

void CTest::PrintData(void)
{
	cout << "CTest(): 생성자 함수" << endl;
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
		cout << "CTest2가 생성되었습니다." << endl;
	}
	~CTest2()
	{
		cout << "CTest2가 소멸되었습니다." << endl;
	}

};

class CTest3
{
private:
	int m_nData;

public:

	// 생성과 동시에 초기화 
	CTest3(int nParam) : m_nData(nParam)
	{
		cout << "CTest3가 생성되었습니다." << endl;
	}
	~CTest3()
	{
		cout << "CTest3가 소멸되었습니다." <<m_nData<< endl;
	}

};

class CTest4
{
private:
	int m_nData;
public:
	
	CTest4()
	{
		cout << "CTest4가 생성되었습니다." << endl;
	}
	~CTest4()
	{
		cout << "CTest4가 소멸되었습니다."  << endl;
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

	cout << "Test2 : 시작" << endl;
	CTest2 t2;



	//
	//Test 3
	//
	cout << "Test3 : 시작" << endl;
	CTest3 t3_a(10);
	CTest3 t3_b(20);

	cout << "Test3 : 끝" << endl;



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
