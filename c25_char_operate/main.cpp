#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "isalnum" << endl;
    cout << isalnum('a') << endl;
    cout << isalnum('A') << endl;
    cout << isalnum('1') << endl;
    cout << isalnum('^') << endl;

    cout << "isalpha" << endl;
    cout << isalpha('a') << endl;
    cout << isalpha('A') << endl;
    cout << isalpha('1') << endl;
    cout << isalpha('^') << endl;

    cout << "isdigit" << endl;
    cout << isdigit('a') << endl;
    cout << isdigit('A') << endl;
    cout << isdigit('1') << endl;
    cout << isdigit('^') << endl;

    cout << "isblank" << endl;
    cout << isblank(' ') << endl;

    cout << "islower" << endl;
    cout << islower('a') << endl;

    cout << "isupper" << endl;
    cout << isupper('A') << endl;

    cout << "tolower" << endl;
    cout << tolower('A') << endl;

    cout << "toupper" << endl;
    cout << toupper('a') << endl;
    return 0;
}