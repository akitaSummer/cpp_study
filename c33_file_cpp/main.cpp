#include <iostream>
#include "circle.h"

using namespace std;

int main(int argc, char *argv[])
{
    Circle circle = Circle(1);
    circle.print_object()->set_radius(4)->print_object();

    Circle *circle_01 = new Circle(1);
    circle_01->print_object()->set_radius(4)->print_object();

    Circle *circle_02 = new Circle(1);
    circle_02->print_object_ref().set_radius_ref(4).print_object_ref();

    return 0;
}