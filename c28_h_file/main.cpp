#include <iostream>
#include "file.h"

using namespace std;

// gcc -o main main.cpp file.cpp
// gcc -c main.cpp file.cpp -> main.o file.o
// gcc -c main main.o file.o
int main(int argc, char *argv[])
{
    cout << add(1, 2) << endl;

    return 0;
}