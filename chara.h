#ifndef CHARA_H
#define CHARA_H
#include <iostream>
#include <string>
using namespace std;


#pragma region STRUCT 

#pragma region enum

enum class ability_type{ //types of abilities
    damage,
    defense,
    heal,
    self_heal,
    atkup,
    defup
};

enum class item_type { //types of items
    weapon,
    armor,
    add_ability,
    offense_armor,
    defensive_weapon,
    all,
    none //useless item
};

enum class learn_ability {//types of abilities learned by items
    no_ability
};

enum class status { //current status of character
    alive,
    dead,
    left //leaving for a bit
};

enum class Sitem_type { //types of special items
    heal,
    groupheal,
    revive,
    rewind,
    damage,
    atkup,
    defup,

};


#pragma endregion

#pragma region character stats //character basic stats

struct growth{
    int g_hp;
    int g_atk;
    int g_def;
};

struct c_stat{
    int hp;
    int atk;
    int def;
};

struct level{
    growth stat_growth;
    int exp;
    int lv;
    int exp_next ;
};

struct stats {
    level lvl;
    //base
    c_stat base;
    //current
    c_stat current;
    //max
    c_stat max;
};

#pragma endregion

#pragma region character ability //character list abilities

struct ability_info{
    string name;
    string desc;
    ability_type type;
    int value1;
};

struct ability_node {
    ability_info info;
    ability_node* next = nullptr;
};

struct ability_list {
    ability_node* first = nullptr;
};

#pragma endregion

#pragma region character items //character list item equipments

struct items_info{
    string name;
    string desc;
    learn_ability learn;
    item_type effect;
    int value1;
    int value2;
};


struct items_node {
    items_info info;
    items_node* next = nullptr;
};

struct items_list {
    items_node* first = nullptr;
};

#pragma endregion

#pragma region character //characters

struct character {
    string nama;
    stats stats;
    status status;
    ability_list abilities;
    items_list items;
};

struct char_node {
    character info;
    char_node* next = nullptr;
    char_node* prev = nullptr;
};

struct party{
    char_node* first = nullptr;
};

#pragma endregion

#pragma region special item //special items

struct Sitem_info{
    Sitem_type type;
    string nama;
    string desc;
    int effect;
};

struct Sitem_node {
    Sitem_info info;
    Sitem_node* next = nullptr;
};

struct special_items{
        Sitem_node* first = nullptr;
};

#pragma endregion

#pragma region player //player stuffs

struct inventory{
    special_items* items;
    items_list* equipments;
};

struct player{
    party* party;
    inventory* inventory;
};

#pragma endregion

#pragma region loot

struct loots{
    items_list* items;
};

#pragma endregion

#pragma region enemy

struct Enemy_master_list{
    party* enemy;
};

struct Enemy{
    party* enemy;
    loots* loot;
};


#pragma endregion

#pragma endregion 


#endif