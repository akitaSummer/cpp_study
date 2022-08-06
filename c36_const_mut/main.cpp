#include <iostream>
#include "cat.h"

using namespace std;

void function_take_cat(Cat cat)
{
    cat.set_name("good cat");
    cat.print_object();
}

void function_take_cat_const(const Cat cat)
{
    cat.print_object();
}

void function_take_cat_ptr(Cat *cat)
{
    cat->print_object();
}

void function_take_cat_ref(Cat &cat)
{
    cat.print_object();
}

void function_take_cat_const_ptr(const Cat *cat)
{
    cat->print_object();
}

void function_take_cat_const_ref(const Cat &cat)
{
    cat.print_object();
}

int main(int argc, char *argv[])
{
    const Cat cat = Cat("cat_1", 2);

    function_take_cat(cat);
    function_take_cat_const(cat);

    const Cat *cat_ptr = &cat;

    // function_take_cat_ptr(cat_ptr);
    function_take_cat_const_ptr(cat_ptr);

    const Cat &cat_ref = cat;

    // function_take_cat_ref(cat_ref);
    function_take_cat_const_ref(cat_ref);

    return 0;
}