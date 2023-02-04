#include "shortSpear.h"

// Default constructor
ShortSpear::ShortSpear()
{
    this->name = "short spear";
    this->damage = 12;
    this->crit = 10;
}

// Mutator functions
void ShortSpear::setName(std::string name)
{
    this->name = name;
}

void ShortSpear::setDamage(int damage)
{
    this->damage = damage;
}

void ShortSpear::setCrit(int crit)
{
    this->crit = crit;
}

// Accessor Functions
std::string ShortSpear::getName() const 
{
    return this->name;
}

int ShortSpear::getDamage() const 
{
    return this->damage;
}

int ShortSpear::getCrit() const 
{
    return this->crit;
}