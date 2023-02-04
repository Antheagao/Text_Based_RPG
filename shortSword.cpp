#include "shortSword.h"

// Default constructor
ShortSword::ShortSword()
{
    this->name = "short sword";
    this->damage = 15;
    this->crit = 5;
}

// Mutator functions
void ShortSword::setName(std::string name)
{
    this->name = name;
}

void ShortSword::setDamage(int damage)
{
    this->damage = damage;
}

void ShortSword::setCrit(int crit)
{
    this->crit = crit;
}

// Accessor Functions
std::string ShortSword::getName() const 
{
    return this->name;
}

int ShortSword::getDamage() const 
{
    return this->damage;
}

int ShortSword::getCrit() const 
{
    return this->crit;
}

