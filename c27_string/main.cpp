#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string a = "hello";
    cout << a.append("world", 0, 3) << endl;
    cout << a.size() << endl;
    cout << a.capacity() << endl;

    for (auto i : a)
    {
        cout << i << endl;
    }

    for (size_t i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << endl;
    }

    cout << a.front() << endl;
    cout << a.back() << endl;

    if (a.find("l") != string::npos)
    {
        cout << "position: " << a.find("l") << endl;
    }

    return 0;
}