#include "longBow.h"

// Default constructor
LongBow::LongBow()
{
    this->name = "long bow";
    this->damage = 45;
    this->crit = 10;
}

// Mutator functions
void LongBow::setName(std::string name)
{
    this->name = name;
}

void LongBow::setDamage(int damage)
{
    this->damage = damage;
}

void LongBow::setCrit(int crit)
{
    this->crit = crit;
}

// Accessor Functions
std::string LongBow::getName() const 
{
    return this->name;
}

int LongBow::getDamage() const 
{
    return this->damage;
}

int LongBow::getCrit() const 
{
    return this->crit;
}