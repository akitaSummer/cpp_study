#include <ostream>
#include "cat.h"
Cat::Cat(const std::string &name, int age) : m_name(name), m_age(age) {}

std::ostream &operator<<(std::ostream &out, const Cat &c)
{
    out << "Cat name: " << c.m_name << " , Cat age: " << c.m_age << "." << std::endl;
    return out;
}