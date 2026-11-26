#ifndef ENEMYSHEETS_H
#define ENEMYSHEETS_H
#include "../chara.h"

// const character chara = {
//     "",             // name
//     {
//         {
//             {0, 0, 0},  // stat growth: HP, ATK, DEF
//             0,          // EXP
//             1,          // level
//             0           // EXP required for next level
//         },
//         {0, 0, 0},      // base stats: HP, ATK, DEF
//         {0, 0, 0},      // current stats: HP, ATK, DEF
//         {0, 0, 0}       // max stats: HP, ATK, DEF
//     },
//     status::alive,      // character status
//     {
//         new ability_node{
//             {"Heal", "Recover HP", ability_type::heal, 30},
//             nullptr
//             }
//     },                 // abilities
//     {
//         new items_node{
//             {"Wooden Sword", "A simple sword",
//              learn_ability::unknown, item_type::attack, 5, 0},
//             nullptr
//     }                  // equipment
// };


const character guard = {
    "guard",             // name
    {
        {
            {3, 2, 0},  // stat growth: HP, ATK, DEF
            0,          // EXP
            1,          // level
            0           // EXP required for next level
        },
        {50, 5, 0},      // base stats: HP, ATK, DEF
        {50, 5, 0},      // current stats: HP, ATK, DEF
        {50, 5, 0}       // max stats: HP, ATK, DEF
    },
    status::alive,      // character status
    {
        new ability_node{
            {"slash", "sword slash", ability_type::damage, 10},
            nullptr
            }
    },                 // abilities
    {
        new items_node{
            {"metal armor", "a royal guard proud armor",
             learn_ability::no_ability, item_type::armor, 2, 0},
            nullptr
    }                  // equipment
    }
};

#endif