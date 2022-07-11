#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    // 栈上应用指针

    int number = 50;
    int *pNumber = &number;
    // 不要这么做！
    // int *pNumber;
    // *pNumber = &number;

    cout << number << ": " << *pNumber << endl;
    cout << &number << ": " << pNumber << endl;

    // 堆上
    int *pNumber0 = nullptr;
    pNumber0 = new int; // 地址是固定的
    *pNumber0 = 13;

    cout << pNumber0 << ": " << *pNumber0 << endl;

    // 删除两次的话会引发崩溃
    delete pNumber0;
    // 删除后建议赋值为nullptr，否则后续如果使用pNumber0不会崩溃，nullptr后会崩溃，有利于调试
    pNumber0 = nullptr;

    return 0;
}