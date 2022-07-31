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

    double get_radius()
    {
        return this->radius;
    }

    void set_radius(double radius)
    {
        this->radius = radius;
    }

    Circle(double params_radius)
    {
        number++;
        radius = params_radius;
        cout << "Circle Constructor" << endl;
    }

    double area()
    {
        return PI * radius * radius;
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
    cout << Circle::number << endl;
    cout << circle.area() << endl;

    Circle *circle_01 = new Circle(1);
    cout << Circle::number << endl;
    cout << circle_01->area() << endl;
    delete circle_01;
    circle_01 = nullptr;

    cout << Circle::number << endl;

    return 0;
}