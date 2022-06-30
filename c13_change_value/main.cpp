#include <iostream>

using namespace std;

int addAge(int);
void addAgePoint(int &);

int main(int argc, char *argv[])
{
    int age = 0;

    cin >> age;

    cout << "age: " << age << endl;
    cout << "addEdge: " << addAge(age) << endl;
    cout << "age: " << age << endl;

    cout << "age: " << age << "&: " << &age << endl;
    addAgePoint(age);
    cout << "addAgePoint" << endl;
    cout << "age: " << age << "&: " << &age << endl;

    return 0;
}

int addAge(int age)
{
    return age + 1;
}

void addAgePoint(int &age)
{
    ++(age);
}