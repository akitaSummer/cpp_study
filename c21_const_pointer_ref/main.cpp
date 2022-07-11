#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double n = 1.4;

    const double *p = &n;

    double m = 1.5;

    cout << "p address: " << p << endl;
    // 不能 *p = m;
    p = &m;
    cout << "p address: " << p << endl;

    double *const p_2 = &n;

    cout << "p_2 value: " << *p_2 << endl;

    // 不能p_2 = &m;
    *p_2 = m;

    cout << "p_2 value: " << *p_2 << endl;

    // 不能 p_3 = &m; 不能 *p_3 = m;
    const double *const p_3 = &n;

    cout << "p_3 address: " << p_3 << endl;

    const double &ref = n;
    // 不能 ref = m;
    cout << "ref value: " << ref << endl;

    return 0;
}