#include "maxPotion.h"

// Default constructor 
MaxPotion::MaxPotion()
{
    this->name = "max potion";
    this->amount = 100;
}

// Mutator functions
void MaxPotion::setName(std::string name) 
{
    this->name = name;
}

void MaxPotion::setAmount(int amount)
{
    this->amount = amount;
}

// Accessor functions
std::string MaxPotion::getName() const
{
    return this->name;
}

int MaxPotion::getAmount() const 
{
    return this->amount;
}