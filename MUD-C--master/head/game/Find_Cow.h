#ifndef FIND_COW_H
#define FIND_COW_H

#include "Game.h"
#include "point\Point.h"

class Find_cow: public Game
{
public:
    void carry_game();
    void ini();  ///初始化
    int bfs(int began, int ended);
    void build_map();   ///建图
    int Prim();
private:
    int shero_place;
    int cow_place[5];
    Point point[6];
    static int LIM; ///坐标范围
};

int Find_cow::LIM = 100;

void Find_cow::carry_game()
{
    char choose[500];
    int mark = 1;

    while(true){
        ///输入合法性
        mark = 1;
        while(mark){
            system("cls");
            printf("welcome to find_cow\n");
            gets(choose);
            if(strlen(choose) > 1 || choose[0] > '3' || choose[0] < '1'){
                continue;
            }
            else{
                mark = 0;
            }
        }
        if(choose[0] == '1'){
            cout << 1 << endl;
        }
        else if(choose[0] == '2'){
            cout << 2 << endl;
        }
        else{
            break;
        }
    }

}

void Find_cow::ini()
{
    srand(time(NULL));
    shero_place = rand();
    for(int i = 1; i <= 5; i ++){
        cow_place[6] = rand();
    }
}

int Find_cow::bfs(int began, int ended)
{
    queue< pair<int, int> > Q;
    int vis[110];

    Q.push(make_pair(began, 0));
    while(!Q.empty()){
        int now = Q.front().first;
        int step = Q.front().second;
        int next;

        if(now == ended){
            return step;
        }
        Q.pop();
        next = 2 * now;
        if(!vis[next] && next >= 1 && next <= LIM){     ///该点未访问过且位置合法
            vis[next] = 1;
            Q.push(make_pair(next, step + 1));
        }
        next = now + 1;
        if(!vis[next] && next >= 1 && next <= LIM){     ///该点未访问过且位置合法
            vis[next] = 1;
            Q.push(make_pair(next, step + 1));
        }
        next = now - 1;
        if(!vis[next] && next >= 1 && next <= LIM){     ///该点未访问过且位置合法
            vis[next] = 1;
            Q.push(make_pair(next, step + 1));
        }
    }
}

void Find_cow::build_map()
{
    for(int i = 1; i <=5; i ++){
        int dis = bfs(shero_place, cow_place[i]);

        point[0].update(i, dis);
        point[i].update(0, dis);
    }
    for(int i = 1; i <= 5; i ++){
        for(int j = i + 1; j <= 5; j ++){
            int dis = bfs(cow_place[j], cow_place[i]);

            point[i].update(j, dis);
            point[j].update(i, dis);
        }
    }
}

int Find_cow::Prim()
{
    int vis[7];
    int ans;
    int cnt;
    priority_queue< pair<int, int> > Q;     ///< -距离，目的点> >

    memset(vis, 0, sizeof(vis));
    vis[0] = 1;
    ans = 0;
    cnt = 0;
    for(int i = 0; i < point[0].show_len(); i ++){
        Q.push(make_pair(-point[0].show_dis(i), point[0].show_obj(i)));
    }
    while(!Q.empty()){
        int w = -Q.top().first;
        int v = Q.top().second;
        Q.pop();
        if(vis[v]) continue;
        vis[v] = 1;
        ans += w;
        cnt ++;
        for(int i = 0; i < point[v].show_len(); i ++){
            Q.push(make_pair(-point[v].show_dis(i), point[v].show_obj(i)));
        }
    }

    return ans;
}

#endif //FIND_COW_H
