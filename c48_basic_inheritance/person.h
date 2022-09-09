#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <string_view>
#include <iostream>
class Person
{
    friend std::ostream &operator<<(std::ostream &out, const Person &person);

public:
    Person() = default;
    Person(std::string_view fullname, int age, std::string_view address);
    ~Person();
    void do_some() const;
    std::string get_name() const
    {
        return m_name;
    }

    std::string get_address() const
    {
        return m_address;
    }

    int get_age() const
    {
        return m_age;
    }

public:
    std::string m_name = "None";

protected:
    int m_age = 0;

private:
    std::string m_address = "None";
};
#endif