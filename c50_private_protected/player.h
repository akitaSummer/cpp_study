#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <string_view>
#include <iostream>
#include "person.h"
class Player : protected Person
{
    friend std::ostream &operator<<(std::ostream &out, const Player &player);

public:
    Player() = default;
    ~Player() = default;
    void play()
    {
        m_name = "player";
        m_age = 13;
    }
};
#endif