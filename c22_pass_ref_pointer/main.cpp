#include <iostream>

using namespace std;

void addTwo(int *const);
void addThree(int &);

int main(int argc, char *argv[])
{
    int number = 13;

    cout << "number: " << number << endl;

    addTwo(&number);

    cout << "number: " << number << endl;

    addThree(number);

    cout << "number: " << number << endl;
    return 0;
}

void addTwo(int *const number)
{
    *number += 2;
}

void addThree(int &number)
{
    number += 3;
}