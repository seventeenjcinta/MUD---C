#ifndef SHERO_H
#define SHERO_H

#include "Role.h"
#include "game\Find_Cow.h"
#include "game\Strategy.h"

class Shero: public Role
{
public:
    void ini();
    void show_data(){}; ///资料展示
    void get_ability(){};



    void talk();

    void show_likability(); ///查询好感度
    void play_game();   ///玩游戏
    void get_task();    ///领取任务
    void buy_gift();    ///买礼物

private:
    int likability;     ///好感度

    Find_cow find_cow;  ///游戏1
    Strategy strategy;  ///游戏2
};

void Shero::ini()
{
    likability = 0;
}

void Shero::show_likability()
{
    cout << likability << endl;
}

void Shero::play_game()
{
    int mark;
    char choose[50];

    while(true){
        ///输入合法性
        mark = 1;
        while(mark){
            system("cls");
            cout << endl << endl << endl << endl << endl;
            cout << "                 *****************************************************************" << endl;
            cout << "                 *那么，你想陪我玩什么游戏呢？                                   *" << endl;
            cout << "                 *                                                               *" << endl;
            cout << "                 * <1> 寻找大奶牛                                                *" << endl;
            cout << "                 * <2> 疯狂的石头                                                *" << endl;
            cout << "                 * <3> 离开游戏                                                  *" << endl;
            cout << "                 *                                                               *" << endl;
            cout << "                 *                                                 直接输入选择< *" << endl;
            cout << "                 *****************************************************************" << endl;
            gets(choose);
            if(strlen(choose) > 1 || choose[0] > '3' || choose[0] < '1'){
                continue;
            }
            else{
                mark = 0;
            }
        }
        if(choose[0] == '1'){
            find_cow.carry_game();
        }
        else if(choose[0] == '2'){
            strategy.carry_game();
        }
        else{
            break;
        }
    }
}


void Shero::talk()
{
    char choose[500];
    int mark = 1;

    while(true){
        ///输入合法性
        mark = 1;
        while(mark){
            system("cls");
            cout << endl << endl << endl << endl << endl;
            cout << "                 *****************************************************************" << endl;
            cout << "                 *好无聊呐，你来找我做什么呢，我超甜的~~~                        *" << endl;
            cout << "                 *                                                               *" << endl;
            cout << "                 * <1> 玩游戏                                                    *" << endl;
            cout << "                 * <2> 买礼物                                                    *" << endl;
            cout << "                 * <3> 做任务                                                    *" << endl;
            cout << "                 * <4> 离开女神                                                  *" << endl;
            cout << "                 *                                                               *" << endl;
            cout << "                 *                                                 直接输入选择< *" << endl;
            cout << "                 *****************************************************************" << endl;
            gets(choose);
            if(strlen(choose) > 1 || choose[0] > '4' || choose[0] < '1'){
                continue;
            }
            else{
                mark = 0;
            }
        }
        if(choose[0] == '1'){
            play_game();
        }
        else if(choose[0] == '2'){
            cout << "你买不起礼物的快滚。" << endl;
        }
        else if(choose[0] == '3'){
            cout << "丑逼还想做任务?" << endl;
        }
        else{
            break;
        }
    }
}

/*
void Shero::play_game()
{

    char choose[50];
    int mark = 1;

    while(mark){
        cin >> choose;
        if(){

        }
        else if(){

        }
        else if(){

        }
    }
}

void Shero::get_task()
{

}

void Shero::buy_gift()
{

}
*/
#endif //SHERO_H
