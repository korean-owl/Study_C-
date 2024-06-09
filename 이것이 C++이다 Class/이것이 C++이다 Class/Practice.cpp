
#include"MyString.h"
#include<iostream>
using namespace std;

int main()
{
	CMyString strData;
	strData.SetString("Hello", 5);
	cout << strData.GetString(5) << endl;
	
	return 0;
}