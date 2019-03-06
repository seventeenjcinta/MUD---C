#ifndef STRATEGY_H
#define STRATEGY_H

#include "Game.h"
#include <bits/stdc++.h>
using namespace std;

///博弈
class Strategy: public Game
{
public:
    void carry_game();
    void ini();  ///初始化
private:
    bool order;     ///flase - NPC先  true - 玩家先
    int stone;
    int take;
    static int ini_stone;
    static int ini_take;
};

int Strategy::ini_stone = 50;
int Strategy::ini_take = 5;

void Strategy::ini()
{
    srand(time(NULL));

    take = rand() % ini_stone + 1;
    stone = rand() % (ini_stone - ini_take) + 5;
}

void Strategy::carry_game()
{
    char ops[50];

    system("pause");
    for(int i = 1; i < 50; i ++){
        if(!stone){
            if(i % 2 == order){
                printf("You lose.\n");
            }
            else{
                printf("You win!\n");
            }
            break;
        }
        if(i % 2 == order){ ///玩家行动
            int mark = 1;

            while(mark){
                gets(ops);
                int t = ops[0] - '0';
                if(strlen(ops) > 1 || t < 1 || t > take || t > stone){
                    printf("输入不够规范\n");
                    continue;
                }
                else{
                    stone -= t;
                    mark = 0;
                }
            }
        }
        else{
            int ops;
            for(int i = 1; i <= 50; i ++){
                if(take * i + 1 == stone){
                    ops = rand() % ini_take + 1;
                    break;
                }
                else if(take * i + 1 > stone){
                    stone = take * i + 1;
                    break;
                }
            }
        }
    }
}

#endif //STRATEGY_H
