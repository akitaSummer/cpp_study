#ifndef CIRCLE_H
#define CIRCLE_H ;
#include <iostream>
#include "constants.h"

using namespace std;

class Circle
{
public:
    static int number;
    // constructor
    Circle()
    {
        number++;
        radius = 1.0;
        cout << "Circle Constructor" << endl;
    }

    Circle(double radius)
    {
        number++;
        this->radius = radius;
        cout << "Circle Constructor" << endl;
    }

    double area();

    Circle *print_object();

    Circle *set_radius(double radius);

    Circle &print_object_ref();

    Circle &set_radius_ref(double radius);

    ~Circle()
    {
        number--;
        cout << "Circle Destructor" << endl;
    }

private:
    double radius = 0;
};
#endif