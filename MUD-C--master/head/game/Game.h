#ifndef GAME_H
#define GAME_H

#include <bits/stdc++.h>

class Game
{
public:
    virtual void carry_game() = 0;
    void get_gold(int ngold);
    int show_gold();
private:
    int gold;
};

void Game::get_gold(int ngold)
{
    gold = ngold;
}

int Game::show_gold()
{
    return gold;
}

#endif //GAME_H
