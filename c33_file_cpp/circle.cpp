#include "circle.h"

int Circle::number = 0;

double Circle::area()
{
    return PI * radius * radius;
}

Circle *Circle::print_object()
{
    cout << "Object address: " << this << endl;
    cout << "radius: " << this->radius << endl;
    return this;
}

Circle *Circle::set_radius(double radius)
{
    this->radius = radius;
    return this;
}

Circle &Circle::print_object_ref()
{
    cout << "Object address: " << this << endl;
    cout << "radius: " << this->radius << endl;
    return *this;
}

Circle &Circle::set_radius_ref(double radius)
{
    this->radius = radius;
    return *this;
}