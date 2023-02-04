#ifndef INVENTORY_H
#define INVENTORY_H
#include <vector>
#include "weapon.h"
#include "heal.h"
#include "armor.h"

class Inventory 
{
    private:
        std::vector<Weapon *> weaponBag;
        std::vector<Heal *> healBag;
        std::vector<Armor *> armorBag;
    public:
        // Mutator functions
        void addWeapon(Weapon *weapon);
        void addHeal(Heal *heal);
        void addArmor(Armor *armor);

        // Accessor functions
        void showWeapon() const;
        void showHeal() const;
        void showArmor() const;
        int showHealSize() const;
        int showWeaponSize() const;
        int showArmorSize() const;

        // Using heal item functions
        bool gotSmPotion();
        bool gotLaPotion();
        bool gotMaPotion();
        int smallAmount();
        int largeAmount();
        int maxAmount();
};

#endif