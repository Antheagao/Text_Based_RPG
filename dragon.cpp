#include "dragon.h"

// Defaault constructor
Dragon::Dragon()
{
    this->name = "dragon";
    this->level = 1;
    this->maxHp = 40 + this->level * 3 / 4;
    this->health = maxHp;
    this->damage = 13 + this->level * 3 / 2;
    this->crit = 8 + this->level / 2;
    this->expWorth = (100 * 3 / 2 * level) / 7;
}

// Mutator functions
void Dragon::setName(std::string name) 
{
    this->name = name;
}

void Dragon::setHealth(int health) 
{
    this->health = health;
}

void Dragon::setDamage(int damage) 
{
    this->damage = damage;
}

void Dragon::setCrit(int crit)
{
    this->crit = crit;
}

void Dragon::setLevel(int level)
{
    this->level = level;
}

void Dragon::setExpWorth(int expWorth)
{
    this->expWorth = expWorth;
}

void Dragon::setMaxHp(int maxHp) 
{
    this->maxHp = maxHp;
}

// Accessor funcitons
std::string Dragon::getName() const 
{
    return this->name;
}

int Dragon::getHealth() const 
{
    return this->health;
}

int Dragon::getDamage() const 
{
    return this->damage;
}

int Dragon::getCrit() const 
{
    return this->crit;
}

int Dragon::getLevel() const 
{
    return this->level;
}

int Dragon::getExpWorth() const 
{
    return this->expWorth;
}

int Dragon::getMaxHp() const 
{
    return this->maxHp;
}