#include <iostream>
#include "cat.h"
#include "person.h"

using namespace std;

void cat_info(const Cat &c)
{
    cout << "Cat name: " << c.m_name << " , Cat age: " << c.m_age << "." << endl;
}

int main(int argc, char *argv[])
{
    Cat c1 = Cat("mini", 3);
    cat_info(c1);

    Person p1;
    p1.cat_info(c1);

    return 0;
}