#ifndef SHEETS_H
#define SHEETS_H
#include "..\chara.h"

#pragma region character

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

const character ALIZA = {
    "Aliza", // name
    {
        {
            {15, 3, 2}, // stat growth: HP, ATK, DEF
            0, // EXP
            1, // level
            100 // EXP required for next level
        },
        {150, 10, 0}, // base stats: HP, ATK, DEF
        {150, 10, 0}, // base stats: HP, ATK, DEF
        {150, 10, 0} // base stats: HP, ATK, DEF
    },
    status::alive, // character status
    {
        new ability_node{
            {"Slash", "Basic physical attack", ability_type::damage, 20},
            nullptr
        }
    },
    {
        new items_node{
            {"Wooden Sword", "A simple sword",
             learn_ability::no_ability, item_type::weapon, 5, 0},
        new items_node{
            {"normal cloths", "your every day clothing",
                learn_ability::no_ability, item_type::armor, 0, 0},
            nullptr
            }
        }
    }
};

#pragma endregion











#endif