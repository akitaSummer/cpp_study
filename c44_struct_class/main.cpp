#include <iostream>
#include <string>

using namespace std;

class Persion
{
    std::string name = "Persion";
};

struct Cat
{
    std::string name = "Cat";
};

int main(int argc, char *argv[])
{
    Cat c;
    Persion p;
    cout << c.name << endl;
    // cout << p.name << endl;

    return 0;
}