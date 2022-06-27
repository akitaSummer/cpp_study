#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int scores = 0;
    cin >> scores;

    if (scores > 90)
    {
        cout << "A" << endl;
    }
    else if (scores > 80)
    {
        cout << "B" << endl;
    }
    else
    {
        cout << "F" << endl;
    }
}