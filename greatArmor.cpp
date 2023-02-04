#include "greatArmor.h"

// Default constructor
GreatArmor::GreatArmor() 
{
    this->defense = 7;
    this->name = "great armor";
}

// Mutator functions
void GreatArmor::setName(std::string name)
{
    this->name = name;
}

void GreatArmor::setDefense(int defense)
{
    this->defense = defense;
}

// Accessor functions
std::string GreatArmor::getName() const 
{
    return this->name;
}

int GreatArmor::getDefense() const
{
    return this->defense;
}