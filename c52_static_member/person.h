#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <string_view>
#include <iostream>
class Person
{
    friend std::ostream &operator<<(std::ostream &out, const Person &person);

public:
    Person()
    {
        ++m_count;
    };
    Person(std::string_view fullname, int age, std::string_view address);
    Person(const Person &source);
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
    static int m_count;

protected:
    int m_age = 0;

private:
    std::string m_address = "None";
};
#endif