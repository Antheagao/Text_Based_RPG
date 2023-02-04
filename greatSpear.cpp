#include "greatSpear.h"

// Default constructor
GreatSpear::GreatSpear()
{
    this->name = "great spear";
    this->damage = 77;
    this->crit = 20;
}

// Mutator functions
void GreatSpear::setName(std::string name)
{
    this->name = name;
}

void GreatSpear::setDamage(int damage)
{
    this->damage = damage;
}

void GreatSpear::setCrit(int crit)
{
    this->crit = crit;
}

// Accessor Functions
std::string GreatSpear::getName() const 
{
    return this->name;
}

int GreatSpear::getDamage() const 
{
    return this->damage;
}

int GreatSpear::getCrit() const 
{
    return this->crit;
}