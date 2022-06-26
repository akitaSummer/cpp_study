#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    // 对象 类型 
    int x = 0;
    cout << sizeof(x) << endl; // 四个字节

    cout << "Intger " << sizeof(int) << endl; // 4
    cout << "Char " << sizeof(char) << endl; // 1
    cout << "Boolean " << sizeof(bool) << endl; // 1
    cout << "Double " << sizeof(double) << endl; // 8
    cout << "Float " << sizeof(float) << endl; // 4
    cout << "Long " << sizeof(long) << endl; // m1: 8 window: 4
    cout << "Long Long " << sizeof(long long) << endl; // 8
    cout << "Unsigned Long " << sizeof(unsigned long) << endl; // m1: 8 window: 4
    cout << "Size_t " << sizeof(size_t) << endl; // 8

    cout << "Intger* " << sizeof(int*) << endl; // 64位：8 32位：4
    cout << "Char* " << sizeof(char*) << endl; // 8 同上
    cout << "Boolean* " << sizeof(bool*) << endl; // 8
    cout << "Double* " << sizeof(double*) << endl; // 8
    cout << "Float* " << sizeof(float*) << endl; // 8
    cout << "Long* " << sizeof(long*) << endl; // 8

    auto value1 = 1; // int
    auto value2 = 2.0; // double
    auto value3 = 3ll; // long long
    auto value4 = 4.0f; // float
    auto value5 = 5ul; // unsigned long
    auto value6 = 6.0l; // long double
}