#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <string>
class Cat
{
public:
    Cat(std::string name, int age);

    std::string &get_name();
    const int &get_age() const;

    void set_name(std::string name);
    void set_age(int age);

    void print_object() const;

private:
    mutable size_t print_count = 0;
    std::string name;
    int age;
};
#endif