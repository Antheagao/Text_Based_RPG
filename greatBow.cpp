#include "greatBow.h"

// Default constructor
GreatBow::GreatBow()
{
    this->name = "great bow";
    this->damage = 85;
    this->crit = 15;
}

// Mutator functions
void GreatBow::setName(std::string name)
{
    this->name = name;
}

void GreatBow::setDamage(int damage)
{
    this->damage = damage;
}

void GreatBow::setCrit(int crit)
{
    this->crit = crit;
}

// Accessor Functions
std::string GreatBow::getName() const 
{
    return this->name;
}

int GreatBow::getDamage() const 
{
    return this->damage;
}

int GreatBow::getCrit() const 
{
    return this->crit;
}