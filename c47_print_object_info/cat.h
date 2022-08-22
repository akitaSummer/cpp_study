#ifndef CAT_H
#define CAT_H
#include <string>
class Cat
{
    friend void cat_info(const Cat &c);
    friend std::ostream &operator<<(std::ostream &out, const Cat &c);
    friend class Person;

public:
    Cat(const std::string &name, int age);

private:
    std::string m_name;
    int m_age;
};
#endif