#include "slime.h"

// Defualt constructor
Slime::Slime()
{
    this->name = "slime";
    this->level = 1;
    this->maxHp = 31 + this->level * 3 / 4;
    this->health = maxHp;
    this->damage = 7 + this->level * 3 / 2;
    this->crit = 2 + this->level / 2;
    this->expWorth = (40 * 3 / 2 * level) / 7;
}

// Mutator functions
void Slime::setName(std::string name) 
{
    this->name = name;
}

void Slime::setHealth(int health) 
{
    this->health = health;
}

void Slime::setDamage(int damage) 
{
    this->damage = damage;
}

void Slime::setCrit(int crit)
{
    this->crit = crit;
}

void Slime::setLevel(int level)
{
    this->level = level;
}

void Slime::setExpWorth(int expWorth)
{
    this->expWorth = expWorth;
}

void Slime::setMaxHp(int maxHp)
{
    this->maxHp = maxHp;
}

// Accessor funcitons
std::string Slime::getName() const 
{
    return this->name;
}

int Slime::getHealth() const 
{
    return this->health;
}

int Slime::getDamage() const 
{
    return this->damage;
}

int Slime::getCrit() const 
{
    return this->crit;
}

int Slime::getLevel() const 
{
    return this->level;
}

int Slime::getExpWorth() const 
{
    return this->expWorth;
}

int Slime::getMaxHp() const 
{
    return this->maxHp;
}