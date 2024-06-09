#include <iostream>
#include "CMystring.h"
using namespace std;

int main()
{
    std::cout << "시작\n";

    CMyString strData;
    strData.SetString("Hello", 5);
    cout << strData.GetString(5) << endl;
    strData.SetString("World", 5);
    cout << strData.GetString(5) << endl;

    return 0;
}
