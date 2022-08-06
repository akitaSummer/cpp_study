#include "cat.h"

Cat::Cat(std::string name, int age)
{
    this->name = name;
    this->age = age;
}

std::string &Cat::get_name()
{
    return this->name;
}

const int &Cat::get_age() const
{
    return this->age;
}

void Cat::set_name(std::string name)
{
    this->name = name;
}

void Cat::set_age(int age)
{
    this->age = age;
}

void Cat::print_object() const
{
    std::cout << "Cat address: " << this << ", name: " << this->name << ", age: " << this->age << "." << std::endl;
    this->print_count++;
    std::cout << "print_count : " << this->print_count << "." << std::endl;
}