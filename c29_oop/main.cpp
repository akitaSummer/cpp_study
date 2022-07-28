#include <iostream>

using namespace std;

class Vector2
{
public:
    Vector2(int x, int y) : x(x), y(y)
    {
        cout << "Construct Vector2" << endl;
    }
    virtual ~Vector2()
    {
        cout << "Virtual Vector2" << endl;
    }
    virtual void print() const
    {
        cout << "( " << x << " , " << y << " )" << endl;
    }

protected:
private:
    int x;
    int y;
};

class Vector3 : public Vector2
{
public:
    Vector3(int x, int y, int z) : Vector2(x, y), z(z)
    {
        cout << "Construct Vector3" << endl;
    }
    void print() const
    {
        cout << "( " << z << " )" << endl;
    }

protected:
private:
    int z;
};

int main(int argc, char *argv[])
{
    Vector2 ex = Vector2(1, 3);
    Vector3 ex_2 = Vector3(1, 2, 3);
    ex_2.print();

    Vector2 *demo2d = new Vector2(1, 3);
    delete demo2d;
    demo2d = nullptr;

    Vector2 *demo3d = new Vector3(1, 2, 3);
    demo3d->print();
    delete demo3d;
    demo2d = nullptr;

    return 0;
}