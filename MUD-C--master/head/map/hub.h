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
            cout << "                 * ѡ����Ҫ�����Ľ���Ŷ                                          *" << endl;
            cout << "                 *                                                               *" << endl;
            cout << "                 * <1> Smithy   - 100 gold                                       *" << endl;
            cout << "                 * <2> Stable   - 100 gold                                       *" << endl;
            cout << "                 * <3> Sawmill  - 100 gold                                       *" << endl;
            cout << "                 * <4> Gold     - 100 gold                                       *" << endl;
            cout << "                 * <5> Altar    - 100 gold                                       *" << endl;
            cout << "                 * <6> Ordnance - 100 gold                                       *" << endl;
            cout << "                 * <7> �뿪                                                      *" << endl;
            cout << "                 *                                                               *" << endl;
            cout << "                 *                                                 ֱ������ѡ��< *" << endl;
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
                cout << "                 * �����ɹ���                                                    *" << endl;
                cout << "                 *                                                               *" << endl;
                cout << "                 *                                                   ���������< *" << endl;
                cout << "                 *****************************************************************" << endl;
                system("pause");
            }
            else{
                system("cls");
                cout << endl << endl << endl << endl << endl;
                cout << "                 *****************************************************************" << endl;
                cout << "                 * �ý����ѱ�������                                              *" << endl;
                cout << "                 *                                                               *" << endl;
                cout << "                 *                                                   ���������< *" << endl;
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
        ///����Ϸ���
        mark = 1;
        while(mark){
            system("cls");
            cout << endl << endl << endl << endl << endl;
            cout << "                 *****************************************************************" << endl;
            cout << "                 *���������һ�첻��ô?�����ɶ�ţ�                              *" << endl;
            cout << "                 *                                                               *" << endl;
            cout << "                 * <1> �б�                                                      *" << endl;
            cout << "                 * <2> ����Ů��                                                  *" << endl;
            cout << "                 * <3> ��������                                                  *" << endl;
            cout << "                 * <4> �뿪                                                      *" << endl;
            cout << "                 *                                                               *" << endl;
            cout << "                 *                                                 ֱ������ѡ��< *" << endl;
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
