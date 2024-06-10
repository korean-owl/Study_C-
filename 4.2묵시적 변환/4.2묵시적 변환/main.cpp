// 4.2묵시적 변환.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include "CTestData.h"
#include <iostream>
using namespace std;

void TestFunc(const CTestData& param);
int main()
{
//	TestFunc(5);
	//explicit 때문에 묵시적 선언 막혔으므로 아래와 같이 작성해야함.
	TestFunc(CTestData(5));

	CTestData a(10);
	cout << a.GetData() << endl;
	// 1.  C언어 스타일 형변환 X -> 강제성이 너무 강함
	//cout << (int)a << endl;

	// 2. C++의 형변환 -> 위와 다른것 : 바꿀 수 있는 것만 바꾼다.
	//const_cast, static_cast, 
	//dynamic_cast, reinterpret_cast
	cout << static_cast<int>(a) << endl;

	//3. 묵시적 변환 X ->explicit으로 막았음
	//cout << a << endl;
	return 0;
}
//여기서 형변환 1번 하는거임
void TestFunc(const CTestData &param)
{
	cout << "TestFunc(): " << param.GetData() << endl;
}
