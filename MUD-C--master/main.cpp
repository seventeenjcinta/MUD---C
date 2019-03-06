#include <bits/stdc++.h>
#include <time.h>
#include <windows.h>
#include "mudhead.h"

using namespace std;

HWND hwnd=GetForegroundWindow();

int main()
{
    ShowWindow(hwnd,SW_MAXIMIZE);

    int x;
    int y;


    x = 5; y = 5;

    ///µØÍ¼
    City my_city[6][6];
    Path_one my_path_one[6][6];
    Path_two my_path_two[6][6];


    ///Ó¢ÐÛ
    Hero my_hero;

    for(int i = 2; i <= 4; i ++){
        my_city[1][i].ini(2);
        my_city[5][i].ini(3);
        my_city[i][1].ini(4);
        my_city[i][5].ini(5);
        for(int j = 1; j <= 5; j ++){
            if(i == 3 && j == 3){
                my_city[i][j].ini(0);
            }
            else{
                my_city[i][j].ini(1);
            }
        }
    }





    while(true){
        cout << 6 << endl;
        if(x % 2 && y % 2){
            my_city[(x + 1) / 2][(y + 1) / 2].operate(my_hero, x, y);
        }
    }




    printf("Hello World!\n");
    printf("Seventy is good.\n");

    return 0;
}
