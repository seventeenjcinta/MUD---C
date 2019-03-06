#ifndef ARCHER_H
#define ARCHER_H
#include "Role.h"
using namespace std;

///弓箭手
class Biu_Soldier: public Role
{
public:
    void ini();
    void upgrade();
    void get_ability();
    void add_cnt(int num);

private:
    int level;
    int cnt;
};


void Biu_Soldier::ini()
{
    string nname = "Archer";

    get_name(nname);
    level = 1;
    update_base(100, 100, 100);
    cnt = 0;
}

void Biu_Soldier::upgrade()

{
    level ++;
    update_base(show_HP() / (level - 1) * level, show_power() / (level - 1) * level, show_armor() / (level - 1) * level);
}

///计算数值
void Biu_Soldier::get_ability()
{
    update_ability(cnt * (show_HP() + show_power() + show_armor() * 0.618));
}

void Biu_Soldier::add_cnt(int num)
{
    cnt += num;
}

#endif //ARCHER_H
