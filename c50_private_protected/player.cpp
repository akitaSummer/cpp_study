#include "player.h"
std::ostream &operator<<(std::ostream &out, const Player &player)
{
    out << "Player: " << &player << std::endl;
    out << "Player name : " << player.get_name() << ", Age: " << player.get_age() << ", Address : " << player.get_address() << std::endl;
    return out;
}