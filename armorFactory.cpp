#include "armorFactory.h"

ArmorFactory::ArmorFactory()
{
    ptr = nullptr;
}

ArmorFactory::~ArmorFactory()
{
    delete ptr;
    ptr = nullptr;
}

Armor *ArmorFactory::create(std::string &input)
{  
    // Create new armor depending on the input
    if (input == "light armor")
    {
        ptr = new LightArmor;
    }
    else if (input == "heavy armor")
    {
        ptr = new HeavyArmor;
    }
    else if (input == "great armor")
    {
        ptr = new GreatArmor;
    }
    // Return a ptr holding the created armor
    return ptr;
}