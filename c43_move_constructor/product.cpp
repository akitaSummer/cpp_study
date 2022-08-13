#include "product.h"

Product::Product(const std::string &name, const std::string &category, int years) : name(name), category(category), years(new int(years))
{
    std::cout << "three" << std::endl;
}
Product::Product(const std::string &name, const std::string &category) : Product(name, category, 0)
{
    std::cout << "two" << std::endl;
}
Product::Product(const std::string &name) : Product(name, "")
{
    std::cout << "one" << std::endl;
}
// copy
// Product::Product(const Product &p) : name(p.name), category(p.category), years(p.get_years()) {}
// deepcopu
Product::Product(const Product &p) : name(p.name), category(p.category), years(new int(*p.get_years())) {}
Product::Product(Product &&p) : name(p.name), category(p.category), years(p.move_years()) {}
Product::~Product()
{
    std::cout << "delete" << std::endl;
    delete years;
}