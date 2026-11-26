#include "func.h"
#include "sheets/charactersheets.h"
#include "sheets/enemysheets.h"

void newplayer(player &p){
    p.party = new party;
    p.inventory = new inventory;

    p.inventory->items = new special_items;
    p.inventory->equipments = new items_list;

    char_node* x = new char_node;
    x->info = ALIZA;

    p.party->first = x;
}

void printing(player p) {
    char_node* g = new char_node;
    g->info = guard;
    cout << p.party->first->info.nama << " " << g->info.nama;
}

void newenemy (Enemy &p){
    p.enemy = new party;
    p.loot = new loots;


    char_node* x = new char_node;
    x->info = guard;

    p.enemy->first = x;
}