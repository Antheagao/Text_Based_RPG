#include "witch.h"

// Default constructor
Witch::Witch() 
{
    this->name = "witch";
    this->level = 1;
    this->maxHp = 35 + this->level * 3 / 4;
    this->health = maxHp;
    this->damage = 10 + this->level * 3 / 2;
    this->crit = 5 + this->level / 2;
    this->expWorth = (60 * 3 / 2 * level) / 7;
}

// Mutator functions
void Witch::setName(std::string name) 
{
    this->name = name;
}

void Witch::setHealth(int health) 
{
    this->health = health;
}

void Witch::setDamage(int damage) 
{
    this->damage = damage;
}

void Witch::setCrit(int crit)
{
    this->crit = crit;
}

void Witch::setLevel(int level)
{
    this->level = level;
}

void Witch::setExpWorth(int expWorth)
{
    this->expWorth = expWorth;
}

void Witch::setMaxHp(int maxHp)
{
    this->maxHp = maxHp;
}

// Accessor funcitons
std::string Witch::getName() const 
{
    return this->name;
}

int Witch::getHealth() const 
{
    return this->health;
}

int Witch::getDamage() const 
{
    return this->damage;
}

int Witch::getCrit() const 
{
    return this->crit;
}

int Witch::getLevel() const 
{
    return this->level;
}

int Witch::getExpWorth() const 
{
    return this->expWorth;
}

int Witch::getMaxHp() const 
{
    return this->maxHp;
}