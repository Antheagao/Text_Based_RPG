#include "shortBow.h"

// Default constructor
ShortBow::ShortBow()
{
    this->name = "short bow";
    this->damage = 20;
    this->crit = 5;
}

// Mutator functions
void ShortBow::setName(std::string name)
{
    this->name = name;
}

void ShortBow::setDamage(int damage)
{
    this->damage = damage;
}

void ShortBow::setCrit(int crit)
{
    this->crit = crit;
}

// Accessor Functions
std::string ShortBow::getName() const 
{
    return this->name;
}

int ShortBow::getDamage() const 
{
    return this->damage;
}

int ShortBow::getCrit() const 
{
    return this->crit;
}