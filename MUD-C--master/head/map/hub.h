#ifndef HUB_H
#define HUB_H

#include <bits/stdc++.h>
#include "role/Shero.h"
#include "map/map.h"
using namespace std;

class Map;


class Pub
{
public:
    void ini_pub(int nnum);
    void show_pub(bool* nbuild);
    void get_soldior();
    void lock_build(bool* nbuild);
private:
     Shero shero;
     int num;
};

void Pub::ini_pub(int nnum)
{
    num = nnum;
}

void Pub::get_soldior()
{

}

void Pub::lock_build(bool* nbuild)
{
    int hash_build[20] = {0, 0, 1, 3, 4, 10, 11};

    char choose[500];
    int mark;

    while(true){
        mark = 1;
        while(mark){
            system("cls");
            cout << endl << endl << endl << endl << endl;
            cout << "                 *****************************************************************" << endl;
            cout << "                 * 选择你要解锁的建筑哦                                          *" << endl;
            cout << "                 *                                                               *" << endl;
            cout << "                 * <1> Smithy   - 100 gold                                       *" << endl;
            cout << "                 * <2> Stable   - 100 gold                                       *" << endl;
            cout << "                 * <3> Sawmill  - 100 gold                                       *" << endl;
            cout << "                 * <4> Gold     - 100 gold                                       *" << endl;
            cout << "                 * <5> Altar    - 100 gold                                       *" << endl;
            cout << "                 * <6> Ordnance - 100 gold                                       *" << endl;
            cout << "                 * <7> 离开                                                      *" << endl;
            cout << "                 *                                                               *" << endl;
            cout << "                 *                                                 直接输入选择< *" << endl;
            cout << "                 *****************************************************************" << endl;

            gets(choose);
            if(strlen(choose) != 1 || choose[0] < '1' || choose[0] > '7'){
                //cout << 6666666666666666666 << endl;
                continue;
            }
            else{
                mark = 0;
            }
        }
        if(choose[0] == '7'){
            break;
        }
        else{
            if(*(nbuild + hash_build[choose[0] - '0']) == false){
                *(nbuild + hash_build[choose[0] - '0']) = true;
                system("cls");
                cout << endl << endl << endl << endl << endl;
                cout << "                 *****************************************************************" << endl;
                cout << "                 * 解锁成功！                                                    *" << endl;
                cout << "                 *                                                               *" << endl;
                cout << "                 *                                                   任意键继续< *" << endl;
                cout << "                 *****************************************************************" << endl;
                system("pause");
            }
            else{
                system("cls");
                cout << endl << endl << endl << endl << endl;
                cout << "                 *****************************************************************" << endl;
                cout << "                 * 该建筑已被解锁！                                              *" << endl;
                cout << "                 *                                                               *" << endl;
                cout << "                 *                                                   任意键继续< *" << endl;
                cout << "                 *****************************************************************" << endl;
                system("pause");
            }
        }
    }
}

void Pub:: show_pub(bool(* nbuild))
{
    char choose[500];
    int mark;

    while(true){
        ///输入合法性
        mark = 1;
        while(mark){
            system("cls");
            cout << endl << endl << endl << endl << endl;
            cout << "                 *****************************************************************" << endl;
            cout << "                 *真是美妙的一天不是么?你想干啥呐？                              *" << endl;
            cout << "                 *                                                               *" << endl;
            cout << "                 * <1> 招兵                                                      *" << endl;
            cout << "                 * <2> 访问女神                                                  *" << endl;
            cout << "                 * <3> 解锁建筑                                                  *" << endl;
            cout << "                 * <4> 离开                                                      *" << endl;
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

        }
        else if(choose[0] == '2'){
            shero.talk();
        }
        else if(choose[0] == '3'){
            lock_build(nbuild);
        }
        else{
            break;
        }
    }

}


#endif HUB_H
