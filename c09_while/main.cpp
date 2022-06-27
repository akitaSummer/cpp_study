#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int cal = 0;
    while (cal < 10)
    {
        cout << ++cal << endl;
    }

    cout << "end loop" << endl;

    return 0;
}