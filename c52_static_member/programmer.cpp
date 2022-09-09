#include "programmer.h"
std::ostream &operator<<(std::ostream &out, const Programmer &programmer)
{
    out << "Enginner: " << &programmer << std::endl;
    out << "Engineer name : " << programmer.get_name() << ", Age: " << programmer.get_age() << ", Address : " << programmer.get_address() << std::endl;
    return out;
}