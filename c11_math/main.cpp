#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "abs(-19): " << abs(-19) << endl;
    cout << "max(4, 5): " << max(4, 5) << endl;
    cout << "min(4, 5): " << min(4, 5) << endl;
    cout << "floor(10.25): " << floor(10.5) << endl;
    cout << "round(10.25): " << round(10.5) << endl;
    cout << "pow(2, 3): " << pow(2, 3) << endl;
    cout << "sqrt(100): " << sqrt(100) << endl;

    cout << endl;

    cout << "exp(1): " << exp(1) << endl;
    cout << "exp2(1): " << exp2(1) << endl;
    cout << "exp2(2): " << exp2(2) << endl;
    cout << "log(20): " << log(20) << endl;
    cout << "log2(8): " << log2(8) << endl;

    cout << endl;

    srand(time(NULL));
    for (size_t i = 0; i < 10; i++)
    {
        int secret = rand() % 10;
        cout << "secret: " << secret << endl;
    }

    return 0;
}