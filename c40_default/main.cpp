#include <iostream>
#include "product.h"

using namespace std;

int main(int argc, char *argv[])
{
    Product p1 = Product("Box", "Toy", 1);
    p1.print_object();

    Product p2 = Product("Box", "Toy");
    p2.print_object();

    Product p3 = Product("Box");
    p3.print_object();

    Product p4;
    p4.print_object();

    return 0;
}