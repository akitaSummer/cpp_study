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
    BallPlayer p1 = BallPlayer();
    p1.play();
    cout << p1 << endl;

    Programmer e1 = Programmer();
    e1.work();
    cout << e1 << endl;

    return 0;
}