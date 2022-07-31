#include <iostream>

using namespace std;

const double PI = 3.1415926;

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

    double area()
    {
        return PI * radius * radius;
    }

    Circle *print_object()
    {
        cout << "Object address: " << this << endl;
        cout << "radius: " << this->radius << endl;
        return this;
    }

    Circle *set_radius(double radius)
    {
        this->radius = radius;
        return this;
    }

    Circle &print_object_ref()
    {
        cout << "Object address: " << this << endl;
        cout << "radius: " << this->radius << endl;
        return *this;
    }

    Circle &set_radius_ref(double radius)
    {
        this->radius = radius;
        return *this;
    }

    ~Circle()
    {
        number--;
        cout << "Circle Destructor" << endl;
    }

private:
    double radius = 0;
};

int Circle::number = 0;

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