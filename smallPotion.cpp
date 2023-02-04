#include "smallPotion.h"

// Default constructor 
SmallPotion::SmallPotion()
{
    this->name = "small potion";
    this->amount = 20;
}

// Mutator functions
void SmallPotion::setName(std::string name) 
{
    this->name = name;
}

void SmallPotion::setAmount(int amount)
{
    this->amount = amount;
}

// Accessor functions
std::string SmallPotion::getName() const
{
    return this->name;
}

int SmallPotion::getAmount() const 
{
    return this->amount;
}