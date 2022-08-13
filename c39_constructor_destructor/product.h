#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>
class Product
{
public:
    Product(const std::string &name, const std::string &category, int years);
    Product(const std::string &name, const std::string &category);
    Product(const std::string &name);
    ~Product();

    void set_name(const std::string &name)
    {
        this->name = name;
    }

    void set_category(const std::string &category)
    {
        this->category = category;
    }

    void set_years(int years)
    {
        *(this->years) = years;
    }

    const std::string &get_name()
    {
        return this->name;
    }

    const std::string &get_category()
    {
        return this->category;
    }

    int *get_years()
    {
        return this->years;
    }

    void print_object()
    {
        std::cout << "Product: " << this << ", name: " << this->name << ", category: " << this->category << ", years: " << *(this->years) << ", years address: " << this->years << "." << std::endl;
    }

private:
    std::string name;
    std::string category;
    int *years;
};
#endif