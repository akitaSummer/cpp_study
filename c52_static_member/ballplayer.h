#ifndef BALLPLAYER_H
#define BALLPLAYER_H
#include <string>
#include <string_view>
#include <iostream>
#include "player.h"
class BallPlayer : public Player
{
    friend std::ostream &operator<<(std::ostream &out, const BallPlayer &ballPlayer);

public:
    BallPlayer() = default;
    ~BallPlayer() = default;
    void work()
    {
        m_name = "ballPlayer";
        m_age = 23;
    }
};
#endif