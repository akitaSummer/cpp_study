#include <iostream>

#include "person.h"
#include "worker.h"

using namespace std;

int main(int argc, char *argv[])
{
    Worker w1 = Worker("F");
    w1.do_some();
    w1.m_name = "Hello";
    cout << w1 << endl;

    return 0;
}