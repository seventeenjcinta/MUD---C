#ifndef POINT_H
#define POINT_H

#include <bits/stdc++.h>
#include <time.h>
#include <windows.h>

using namespace std;

class Point     ///邻接表
{
public:
    void update(int obj, int dis);
    int show_obj(int place);
    int show_dis(int place);
    int show_len();
private:
    vector<int> obj;    ///该点距离obj[i]的距离是dis[i]
    vector<int> dis;
    int len;            ///容量
};

void Point::update(int nobj, int ndis)
{
    obj.push_back(nobj);
    dis.push_back(ndis);
}

int Point::show_obj(int place)
{
    return obj[place];
}

int Point::show_dis(int place)
{
    return dis[place];
}

int Point::show_len()
{
    return obj.size();
}

#endif //POINT_H
