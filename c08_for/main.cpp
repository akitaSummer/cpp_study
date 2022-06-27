#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    for (size_t i = 0; i < 10; ++i)
    {
        cout << i << endl;
    }

    int arr[] = {1, 2, 3, 4};

    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << "arr size: " << arr_size << endl;

    for (size_t i = 0; i < arr_size; ++i)
    {
        cout << "arr[" << i << "]: " << arr[i] << endl;
    }

    for (auto x : arr)
    {
        cout << "auto arr: " << x << endl;
    }

    for (size_t i = 0; i < 10; ++i)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}