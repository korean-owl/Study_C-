#include <iostream>
#include "CMyString.h"
using namespace std;

void TestFunc(const CMyString& strParam);

int main()
{
    cout << "시작\n";

    CMyString strData;
    strData.SetString("Hello");
    cout << strData.GetString() << endl;
    strData.SetString("World");
    cout << strData.GetString() << endl;

    //Practice 4
    TestFunc(strData);
    TestFunc(CMyString("World"));

    return 0;
}

void TestFunc(const CMyString& strParam)
{
    cout << strParam.GetString() << endl;
}
