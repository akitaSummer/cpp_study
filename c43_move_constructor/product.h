#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>
class Product
{
public:
    Product() = default;
    Product(const std::string &name, const std::string &category, int years);
    Product(const std::string &name, const std::string &category);
    Product(Product &&);
    explicit Product(const std::string &name);

    // copy
    Product(const Product &p);

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

    const std::string &get_name() const
    {
        return this->name;
    }

    const std::string &get_category() const
    {
        return this->category;
    }

    int *get_years() const
    {
        return this->years;
    }

    int *move_years()
    {
        int *new_year = years;
        this->years = nullptr;
        return new_year;
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