#include "heavyArmor.h"

// Default constructor
HeavyArmor::HeavyArmor() 
{
    this->defense = 5;
    this->name = "heavy armor";
}

// Mutator functions
void HeavyArmor::setName(std::string name)
{
    this->name = name;
}

void HeavyArmor::setDefense(int defense)
{
    this->defense = defense;
}

// Accessor functions
std::string HeavyArmor::getName() const 
{
    return this->name;
}

int HeavyArmor::getDefense() const
{
    return this->defense;
}