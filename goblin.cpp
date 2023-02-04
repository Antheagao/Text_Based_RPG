#include "goblin.h"

// Default constructor
Goblin::Goblin()
{
    this->name = "goblin";
    this->level = 1;
    this->maxHp = 33 + this->level * 3 / 4;
    this->health = maxHp;
    this->damage = 8 + this->level * 3 / 2;
    this->crit = 3 + this->level / 2;
    this->expWorth = (60 * 3 / 2 * level) / 7;
}

// Mutator functions
void Goblin::setName(std::string name) 
{
    this->name = name;
}

void Goblin::setHealth(int health) 
{
    this->health = health;
}

void Goblin::setDamage(int damage) 
{
    this->damage = damage;
}

void Goblin::setCrit(int crit)
{
    this->crit = crit;
}

void Goblin::setLevel(int level)
{
    this->level = level;
}

void Goblin::setMaxHp(int maxHp) 
{
    this->maxHp = maxHp;
}

void Goblin::setExpWorth(int expWorth)
{
    this->expWorth = expWorth;
}

// Accessor funcitons
std::string Goblin::getName() const 
{
    return this->name;
}

int Goblin::getHealth() const 
{
    return this->health;
}

int Goblin::getDamage() const 
{
    return this->damage;
}

int Goblin::getCrit() const 
{
    return this->crit;
}

int Goblin::getLevel() const 
{
    return this->level;
}

int Goblin::getExpWorth() const 
{
    return this->expWorth;
}

int Goblin::getMaxHp() const 
{
    return this->maxHp;
}