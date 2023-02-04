#include "weaponFactory.h"

WeaponFactory::WeaponFactory()
{
    ptr = nullptr;
}

WeaponFactory::~WeaponFactory()
{
    delete ptr;
    ptr = nullptr;
}

Weapon *WeaponFactory::generate(std::string &input)
{   
    // Generate a new weapon based on users character
    if (input == "short sword")
    {  
        ptr = new ShortSword;
    }
    else if (input == "long sword")
    {
        ptr = new LongSword;
    }
    else if (input == "great sword")
    {
        ptr = new GreatSword;
    }
    else if (input == "short bow")
    {
        ptr = new ShortBow;
    }
    else if (input == "long bow")
    {
        ptr = new LongBow;
    }
    else if (input == "great bow")
    {
        ptr = new GreatBow;
    }
    else if (input == "short spear")
    {
        ptr = new ShortSpear;
    }
    else if (input == "long spear")
    {
        ptr = new LongSpear;
    }
    else if (input == "great spear")
    {
        ptr = new GreatSpear;
    }
    // Return the pointer holding the generated weapon
    return ptr;
}