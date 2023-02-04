#include "inventory.h"

// Mutator functions
void Inventory::addWeapon(Weapon *weapon)
{
    weaponBag.push_back(weapon);
}

void Inventory::addHeal(Heal *heal)
{
    healBag.push_back(heal);
}

void Inventory::addArmor(Armor *armor)
{
    armorBag.push_back(armor);
}

// Accessor functions
void Inventory::showWeapon() const
{
    std::cout << "--------Weapons--------" << std::endl;
    for (int count = 0; count < weaponBag.size(); count++)
    {
        std::cout << weaponBag[count]->getName() << std::endl;
    }
}

void Inventory::showHeal() const
{
    std::cout << "--------Healing--------" << std::endl;
    for (int count = 0; count < healBag.size(); count++)
    {
        std::cout << healBag[count]->getName() << std::endl;
    }
}

void Inventory::showArmor() const 
{
    std::cout << "--------Armor--------" << std::endl;
    for (int count = 0; count < armorBag.size(); count++)
    {
        std::cout << armorBag[count]->getName() << std::endl;
    }
}

int Inventory::showHealSize() const
{
    return healBag.size();
}

int Inventory::showWeaponSize() const
{
    return weaponBag.size();
}

int Inventory::showArmorSize() const
{
    return armorBag.size();
}

// using heal item functions
bool Inventory::gotSmPotion()
{
    bool found = false;
    for (int count = 0; count < healBag.size(); count++)
    {
        if ("small potion" == std::string(healBag[count]->getName()) && found == false)
        {
            found = true;
            return found;
        }
    }
    return found;
}

bool Inventory::gotLaPotion()
{
    bool found = false;
    for (int count = 0; count < healBag.size(); count++)
    {
        if ("large potion" == std::string(healBag[count]->getName()) && found == false)
        {
            found = true;
            return found;
        }
    }
    return found;
}

bool Inventory::gotMaPotion()
{
    bool found = false;
    for (int count = 0; count < healBag.size(); count++)
    {
        if ("max potion" == std::string(healBag[count]->getName()) && found == false)
        {
            found = true;
            return found;
        }
    }
    return found;
}

int Inventory::smallAmount()
{
    int healing = 0;
    bool gotPotion = false;
    for (int count = 0; count < healBag.size(); count++)
    {
        if ("small potion" == healBag[count]->getName() && gotPotion == false)
        {
            gotPotion = true;
            healing = healBag[count]->getAmount();
            healBag.erase(healBag.begin() + count);
        }
    }
    return healing;
}

int Inventory::largeAmount()
{
    int healing = 0;
    bool gotPotion = false;
    for (int count = 0; count < healBag.size(); count++)
    {
        if ("large potion" == healBag[count]->getName() && gotPotion == false)
        {
            gotPotion = true;
            healing = healBag[count]->getAmount();
            healBag.erase(healBag.begin() + count);
        }
    }
    return healing;
}

int Inventory::maxAmount()
{
    int healing = 0;
    bool gotPotion = false;
    for (int count = 0; count < healBag.size(); count++)
    {
        if ("maxPotion" == healBag[count]->getName() && gotPotion == false)
        {
            gotPotion = true;
            healing = healBag[count]->getAmount();
            healBag.erase(healBag.begin() + count);
        }
    }
    return healing;
}