#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a = 0;
    int b = 0;
    char op = ' ';
    cin >> a >> op >> b;

    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a * b << endl;
        break;
    default:
        cout << "op error" << endl;
        break;
    }
}