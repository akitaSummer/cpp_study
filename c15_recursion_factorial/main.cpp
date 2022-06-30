#include <iostream>

using namespace std;

int factorial(int);

int main(int argc, char *argv[])
{
    int number = 0;

    cin >> number;

    cout << factorial(number) << endl;

    return 0;
}

int factorial(int number)
{
    if (number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}