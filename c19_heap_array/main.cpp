#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double *pArray = new double[13]{1.2, 2.2, 3.2};

    for (size_t i = 0; i < 13; i++)
    {
        cout << "index: " << i << ", value: " << pArray[i] << endl;
    }

    double arr[13] = {1.0, 2.0, 3.0};
    cout << "arr length: " << sizeof(arr) / sizeof(arr[0]) << endl;

    // c++11

    cout << "arr size: " << size(arr) << endl;

    for (auto i : arr)
    {
        cout << i << endl;
    }

    delete[] pArray;
    pArray = nullptr;

    return 0;
}