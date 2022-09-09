#include "person.h"

int Person::m_count = 0;

Person::Person(std::string_view fullname, int age, std::string_view address) : m_name(fullname), m_age(age), m_address(address)
{
    std::cout << "Person Constructor" << std::endl;
}

void Person::do_some() const
{
    std::cout << "Some" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Person &person)
{
    out << "Person name : " << person.get_name() << ", Age: " << person.get_age() << ", Address : " << person.get_address() << std::endl;
    return out;
}

Person::Person(const Person &source) : m_name(source.m_name), m_age(source.m_age), m_address(source.m_address)
{
    std::cout << "Person Copy Constructor" << std::endl;
}

Person::~Person()
{
    --m_count;
    std::cout << "~Person" << std::endl;
}