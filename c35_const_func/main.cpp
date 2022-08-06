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
    const Cat cat = Cat("moon", 1);
    Cat cat_2 = Cat("moon", 2);

    function_take_cat(cat);
    function_take_cat(cat_2);

    function_take_cat_const(cat);
    function_take_cat_const(cat_2);

    function_take_cat_const_ptr(&cat);
    function_take_cat_const_ref(cat);

    return 0;
}