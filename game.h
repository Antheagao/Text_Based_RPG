#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <iomanip>
#include <string>
#include "character.cpp"
#include "goblin.cpp"
#include "slime.cpp"
#include "witch.cpp"
#include "dragon.cpp"

class Game 
{
    private:
        bool playing;
        int choice;
        Character character;
        Enemy *enemy;
    public:
        // Default constructor
        Game();

        // Destructor
        ~Game();

        // Mutator functions
        void setPlaying(bool playing);

        // Accessor Functions
        bool getPlaying() const;

        // Menu Funtcions
        void startMenu();
        void charSelect();

        // Character mutator inventory functions for weapons
        void foundShortSword();
        void foundLongSword();
        void foundGreatSword();
        void foundShortBow();
        void foundLongBow();
        void foundGreatBow();
        void foundShortSpear();
        void foundLongSpear();
        void foundGreatSpear();

        // Character mutator inventory functions for heals
        void foundSmallPotion();
        void foundLargePotion();
        void foundMaxPotion();

        // Character accessor inventory functions
        void showWeapons();
        void showHeals();
        int getSize();

        // Enemy generation functions
        void spawnEnemy();
        void spawnSpecialEnemy();

        // Battle functions
        void beginBattle();
        void beginSpecialBattle();
        void battleMenu(Character &character, Enemy *enemy);
        void battleArt(Character &character,Enemy *enemy);
        void playerAttack();
        void enemyAttack();
        bool runBattle();
        void accessInventory();
};

#endif