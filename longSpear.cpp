#include "longSpear.h"

// Default constructor
LongSpear::LongSpear()
{
    this->name = "long spear";
    this->damage = 37;
    this->crit = 15;
}

// Mutator functions
void LongSpear::setName(std::string name)
{
    this->name = name;
}

void LongSpear::setDamage(int damage)
{
    this->damage = damage;
}

void LongSpear::setCrit(int crit)
{
    this->crit = crit;
}

// Accessor Functions
std::string LongSpear::getName() const 
{
    return this->name;
}

int LongSpear::getDamage() const 
{
    return this->damage;
}

int LongSpear::getCrit() const 
{
    return this->crit;
}