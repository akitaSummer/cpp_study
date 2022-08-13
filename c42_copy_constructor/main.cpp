#include <iostream>
#include <string>
#include "product.h"

using namespace std;

bool compare(const Product &p1, const Product &p2)
{
    return *(p1.get_years()) > *(p2.get_years()) ? true : false;
}

int main(int argc, char *argv[])
{
    Product p1 = Product("Box", "Toy", 1);
    p1.print_object();

    Product p2 = Product("Box", "Toy");
    p2.print_object();

    Product p3 = Product("Box");
    p3.print_object();

    // Product p4;
    // p4.print_object();

    // std::string s1 = "1";

    // compare(p1, s1);

    Product p4 = Product(p3);
    p4.print_object();

    return 0;
}