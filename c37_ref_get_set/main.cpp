#include <iostream>
#include "cat.h"

using namespace std;

int main(int argc, char *argv[])
{
    const Cat cat = Cat("cat_1", 2);
    // cat.get_name() = "mini";

    Cat mut_cat = Cat("cat_1", 2);

    mut_cat.get_name() = "mini";
    // mut_cat.get_age() = 12;

    return 0;
}