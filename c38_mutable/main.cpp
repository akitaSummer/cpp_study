#include <iostream>
#include "cat.h"

using namespace std;

int main(int argc, char *argv[])
{
    const Cat cat = Cat("cat_1", 2);
    cat.print_object();
    cat.print_object();

    return 0;
}