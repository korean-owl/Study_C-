// r-value.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

void TestFunc(int &rParam)
{
	cout << "TestFunc(int &)" << endl;
}
void TestFunc(int &&rParam)
{
	cout << "TestFunc(int &&)" << endl;
}
int main()
{

	// L-value: 사라지지 않는 값, 변수 
	// 3 + 4는 r-value
	// 함수에 매개변수로 전달되어 함수 종료후 삭제 된다는 의미
	
	// 2.	int와 int &&를 매개변수로 하는 함수를 2개 선언하여
	//		TestFunc()는 컴파일러 기준 -> 모호한 함수가 되었다.
	TestFunc(3 + 4);
	int&& data = 3 + 4;
	cout << data << endl;
	data++;
	cout << data << endl;
}