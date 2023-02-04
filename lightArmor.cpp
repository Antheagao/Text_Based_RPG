#include "lightArmor.h"

// Default constructor
LightArmor::LightArmor() 
{
    this->defense = 2;
    this->name = "light armor";
}

// Mutator functions
void LightArmor::setName(std::string name)
{
    this->name = name;
}

void LightArmor::setDefense(int defense)
{
    this->defense = defense;
}

// Accessor functions
std::string LightArmor::getName() const 
{
    return this->name;
}

int LightArmor::getDefense() const
{
    return this->defense;
}