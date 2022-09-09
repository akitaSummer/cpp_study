#ifndef PROGRAMMER_H
#define PROGRAMMER_H
#include <string>
#include <string_view>
#include <iostream>
#include "engineer.h"
class Programmer : public Engineer
{
    friend std::ostream &operator<<(std::ostream &out, const Programmer &programmer);

public:
    Programmer() = default;
    ~Programmer() = default;
    void work()
    {
        m_name = "ff";
        m_age = 23;
    }
};
#endif