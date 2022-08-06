#include <iostream>
#include "cat.h"

using namespace std;

int main(int argc, char *argv[])
{
    const Cat cat1 = Cat("moon1", 1);
    // const object 只能调用const func
    cout << cat1.get_name() << endl;
    cat1.print_object();

    const Cat &cat2 = cat1;
    cout << cat2.get_name() << endl;
    cat2.print_object();

    const Cat *cat3 = &cat1;
    cout << cat3->get_name() << endl;
    cat3->print_object();

    return 0;
}