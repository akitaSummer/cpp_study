#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    // cin cout
    string num1, num2;
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;
    int number1 = stoi(num1);
    int number2 = stoi(num2);
    cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;

    // printf
    printf("%d + %d = %d\n", number1, number2, number1 + number2);

    // argc 命令行参数数量 argv命令行参数字符串列表
    if (argc != 1)
    {
        cout << "You input " << argc << " arguments" << endl;
    }  

    for (size_t i = 0; i < argc; i++)
    {
        cout << "arg_" << i << ": " << argv[i] << endl;
    }
    
}