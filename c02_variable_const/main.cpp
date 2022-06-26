#include <iostream>
#include <string>

using namespace std; 

// const和#define 
#define DPI 44 // 44是什么，不需要关心

// 全局 尽量不要定义
// int RandNum{0}; 
int RandNum = 0;

const double PI = 3.1415926; 

int main(int argc, char *argv[])
{
    cout << "Random Num: " << RandNum << endl;

    RandNum = 3;

    cout << "Random Num: " << RandNum << endl;

    const int age = 35;

    cout << "age: " << age << endl;

    int dpi_int = DPI;
    // string dpi_string = DPI; // 不行
    string dpi_string{DPI};
    cout << "dpi_int: " << dpi_int << endl;
    cout << "dpi_string: " << dpi_string << endl; // 44的ASCII码，即,
}