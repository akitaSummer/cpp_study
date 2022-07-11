#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main(int argc, char *argv[])
{
    // 均为左值，可以获取地址
    int a_0 = 0;
    int a_1 = 1;
    int a_2 = 2;

    // a_1 + a_2 是右值，无法获取地址，结果copy给了x
    int x = a_1 + a_2;

    // int *p = &(a_1 + a_2); a_1 + a_2 是右值，无法获取地址

    // 右值引用
    int &&result = a_1 + a_2; // 没有执行值copy

    x = add(a_1, a_2); // copy

    int &&res = add(a_1, a_2); // no copy

    return 0;
}