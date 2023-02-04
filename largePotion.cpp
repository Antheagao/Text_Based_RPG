#include "largePotion.h"

// Default constructor 
LargePotion::LargePotion()
{
    this->name = "large potion";
    this->amount = 50;
}

// Mutator functions
void LargePotion::setName(std::string name) 
{
    this->name = name;
}

void LargePotion::setAmount(int amount)
{
    this->amount = amount;
}

// Accessor functions
std::string LargePotion::getName() const
{
    return this->name;
}

int LargePotion::getAmount() const
{
    return this->amount;
}