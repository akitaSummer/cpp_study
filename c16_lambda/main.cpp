#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    auto func = []()
    {
        cout << "hello world" << endl;
    };

    func();

    int a = 10;

    auto func_0 = [a]()
    {
        cout << "a: " << a << endl;
    };

    func_0();

    int b = 20;

    auto func_1 = [=]()
    {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    };

    func_1();

    auto func_2 = [&a]()
    {
        a++;
        cout << "a: " << a << ", &:" << a << endl;
    };

    func_2();

    auto func_3 = [&]()
    {
        a++;
        b++;
        cout << "a: " << a << ", &:" << a << endl;
        cout << "b: " << b << ", &:" << b << endl;
    };

    func_3();

    auto func_4 = [&b, a]()
    {
        cout << "a: " << a << ", &:" << a << endl;
        cout << "b: " << b << ", &:" << b << endl;
    };

    func_4();

    return 0;
}