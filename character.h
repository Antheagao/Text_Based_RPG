#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include "inventory.cpp"
#include "weaponFactory.cpp"
#include "armorFactory.cpp"
#include "smallPotion.cpp"
#include "largePotion.cpp"
#include "maxPotion.cpp"

class Character 
{
    private:
        std::string name;       // Name of character
        std::string weapon;     // Name of weapon
        std::string armor;      // Name of armor
        int level;            
        int maxHp;
        int health;             
        int exp;               
        int defense;
        int maxExp;
        Inventory inventory;    
        Weapon *tool;
        Armor *wear;
    public:
        // Default constructor
        Character();

        // Destructor
        ~Character();

        // Mutator functions
        void setName(std::string name);
        void setWeapon(std::string weapon);
        void setArmor(std::string armor);
        void setLevel(int level);
        void setHealth(int health);
        void setMaxHp(int maxHp);
        void setExp(int exp);

        // Accessor functions
        std::string getName() const;
        std::string getWeapon() const;
        std::string getArmor() const;
        int getLevel() const;
        int getHealth() const;
        int getMaxHp() const;
        int getExp() const;

        // Mutator Inventory functions for weapons
        void addShortSword();
        void addLongSword();
        void addGreatSword();
        void addShortBow();
        void addLongBow();
        void addGreatBow();
        void addShortSpear();
        void addLongSpear();
        void addGreatSpear();

        // Mutator Inventory functions for armor
        void addLightArmor();
        void addHeavyArmor();
        void addGreatArmor();

        // Mutator Inventory functions for heals
        void addSmallPotion();
        void addLargePotion();
        void addMaxPotion();

        // Accessor inventory functions
        void showWeapons();
        void showHeals();
        void showArmors();
        int showSize();

        // Character using heal item functions
        bool verifySmPotion();
        bool verifyLaPotion();
        bool verifyMaPotion();
        void useSmallPotion();
        void useLargePotion();
        void useMaxPotion();

        // Attacking functions
        int hit();
        int defend();
        int critDmg();

        // Factory functions
        void createWeapon(std::string &input);
        void createArmor(std::string &input);

        // Level up functions
        bool verifyUp();
        void levelUp();
        void gainExp(int worth);
};

#endif