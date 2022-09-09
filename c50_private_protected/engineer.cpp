#include "engineer.h"
std::ostream &operator<<(std::ostream &out, const Engineer &enginner)
{
    out << "Engineer: " << &enginner << std::endl;
    out << "Engineer name : " << enginner.get_name() << ", Age: " << enginner.get_age() << ", Address : " << enginner.get_address() << std::endl;
    return out;
}