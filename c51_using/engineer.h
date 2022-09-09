#ifndef ENGINEER_H
#define ENGINEER_H
#include <string>
#include <string_view>
#include <iostream>
#include "person.h"
class Engineer : private Person
{
    friend std::ostream &operator<<(std::ostream &out, const Engineer &engineer);

public:
    Engineer() = default;
    ~Engineer() = default;
    void work()
    {
        m_name = "ff";
        m_age = 23;
    }

public:
    using Person::get_address;
    using Person::get_age;
    using Person::get_name;

protected:
    using Person::m_age;
    using Person::m_name;
};
#endif