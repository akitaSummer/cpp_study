#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a = 5;
    int b = 3;

    // and
    int a_and_b = a & b;
    cout << "a and b: " << a_and_b << endl; // 1

    // or
    int a_or_b = a | b;
    cout << "a or b: " << a_or_b << endl; // 7

    // xor
    int a_xor_b = a^b;
    cout << "a or b: " << a_xor_b << endl; // 6

    // ~
    cout << "~0: "<< ~0 << endl;
    cout << "~1: "<< ~1 << endl;

    // left
    int left = a << b; // *8
    cout << "a << b: " << left << endl; // 6

    // right
    int right = a >> b; // /8 = 0
    cout << "a >> b: " << right << endl; // 6
}