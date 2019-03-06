#ifndef ROLE_H
#define ROLE_H
#include <bits/stdc++.h>
#include "Role.h"

using namespace std;

class Role
{
public:
    virtual void ini() = 0;
    virtual void show_data() = 0; ///资料展示
    virtual void get_ability() = 0;

    void update_base(int nHP, int npower, int narmor);
    int show_HP();
    int show_power();
    int show_armor();

    double show_ability();

    string show_name();

    void get_name(string nname);
    void update_ability(double nability);

private:
    string name;
    int HP;     ///血量
    int power;  ///攻击力
    int armor;  ///护甲

    double ability;
};

void Role::update_base(int nHP, int npower, int narmor)
{
    HP = nHP;
    power = npower;
    armor = narmor;
}

int Role::show_HP()
{
    return HP;
}

int Role::show_power()

{
    return power;
}

int Role::show_armor()
{
    return armor;
}

double Role::show_ability()

{
    return ability;
}

string Role::show_name()
{
    return name;
}

void Role::get_name(string nname)
{
    name = nname;
}

void Role::update_ability(double nability)
{
    ability = nability;
}

#endif //ROLE_H
