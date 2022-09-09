#include <iostream>

#include "person.h"
#include "worker.h"

using namespace std;

int main(int argc, char *argv[])
{
    Worker w1 = Worker("G", "Address", "F", 45);
    w1.do_some();
    w1.m_name = "Hello";
    cout << w1 << endl;

    Worker w2 = Worker(w1);

    cout << w2 << endl;

    return 0;
}