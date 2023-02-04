#include "longSword.h"

// Default constructor
LongSword::LongSword()
{
    this->name = "long sword";
    this->damage = 40;
    this->crit = 10;
}

// Mutator functions
void LongSword::setName(std::string name)
{
    this->name = name;
}

void LongSword::setDamage(int damage)
{
    this->damage = damage;
}

void LongSword::setCrit(int crit)
{
    this->crit = crit;
}

// Accessor Functions
std::string LongSword::getName() const 
{
    return this->name;
}

int LongSword::getDamage() const 
{
    return this->damage;
}

int LongSword::getCrit() const 
{
    return this->crit;
}
