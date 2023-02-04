#include "greatSword.h"

// Default constructor
GreatSword::GreatSword()
{
    this->name = "great sword";
    this->damage = 80;
    this->crit = 15;
}

// Mutator functions
void GreatSword::setName(std::string name)
{
    this->name = name;
}

void GreatSword::setDamage(int damage)
{
    this->damage = damage;
}

void GreatSword::setCrit(int crit)
{
    this->crit = crit;
}

// Accessor Functions
std::string GreatSword::getName() const 
{
    return this->name;
}

int GreatSword::getDamage() const 
{
    return this->damage;
}

int GreatSword::getCrit() const 
{
    return this->crit;
}
