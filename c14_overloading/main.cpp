#include <iostream>

using namespace std;

int max(int, int);
double max(double, double);

int main(int argc, char *argv[])
{
    double da = 1.2;
    double db = 2.2;

    int a = 1;
    int b = 2;

    cout << max(da, db) << endl;
    cout << max(a, b) << endl;

    return 0;
}

int max(int a, int b)
{
    return a > b ? a : b;
}

double max(double a, double b)
{
    return a > b ? a : b;
}