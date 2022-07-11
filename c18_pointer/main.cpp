#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout << sizeof(int *) << endl;
    cout << sizeof(double *) << endl;

    // error
    // int value = 11;
    // double *doublePtr = &value;

    // 指针初始化

    // 指向栈
    int number = 10;
    int *pNumber = &number;

    // 指向堆
    int *pNumber0 = new int{12};
    delete pNumber0;
    pNumber0 = nullptr;

    // 内存泄漏

    int *pNumber1 = new int{1};
    // 正确的做法
    // delete pNumber1;
    // pNumber1 = nullptr;
    pNumber1 = new int{2}; // 赋值导致int{1}内存泄漏

    {
        int *pNumber2 = new int{2};
        // 正确的做法
        // delete pNumber2;
        // pNumber2 = nullptr;
    } // 出作用域时，int{2}内存泄漏

    return 0;
}