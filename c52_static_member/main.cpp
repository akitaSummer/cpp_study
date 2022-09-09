#include <iostream>

#include "person.h"
#include "worker.h"
#include "engineer.h"
#include "player.h"
#include "programmer.h"
#include "ballplayer.h"

using namespace std;

int main(int argc, char *argv[])
{
    Person p1 = Person();
    Person p2 = Person();
    cout << p1 << endl;

    Worker e1 = Worker();
    Worker e2 = Worker();
    cout << e1 << endl;
    cout << e2.m_count << endl;

    return 0;
}