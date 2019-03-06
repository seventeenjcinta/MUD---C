#ifndef HERO_H
#define HERO_H
#include "Role.h"

class Hero: public Role
{
public:
    void ini();
    void show_data(); ///资料展示
    void get_ability();
    void update_gold(int ngold);

private:
    int gold;
};

void Hero::ini()
{
    char nname_char[50];
    string nname_string;

    gets(nname_char);
    nname_string = nname_char;
    get_name(nname_string);
    gold = 0;
}

void Hero::show_data()
{

}

void Hero::get_ability()
{

}

void Hero::update_gold(int ngold)
{
    gold += ngold;
}

#endif // HERO_H
