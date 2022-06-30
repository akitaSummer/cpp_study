#include <iostream>

using namespace std;

// 声明函数
int factorial(int);

int main(int argc, char *argv[])
{

    int number = 0;

    cin >> number;

    cout << factorial(number) << endl;

    return 0;
}

// 实现函数
int factorial(int number)
{
    int result = 1;

    for (size_t i = 1; i <= number; i++)
    {
        result = result * i;
    }

    return result;
}