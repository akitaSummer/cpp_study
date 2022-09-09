#include "ballplayer.h"
std::ostream &operator<<(std::ostream &out, const BallPlayer &ballPlayer)
{
    out << "BallPlayer: " << &ballPlayer << std::endl;
    out << "Engineer name : " << ballPlayer.get_name() << ", Age: " << ballPlayer.get_age() << ", Address : " << ballPlayer.get_address() << std::endl;
    return out;
}