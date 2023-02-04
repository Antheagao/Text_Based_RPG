#ifndef HEAL_H
#define HEAL_H
#include <iostream>

class Heal 
{
    private:

    public:
        // Mutator functions
        virtual void setName(std::string name) = 0;
        virtual void setAmount(int amount) = 0;

        // Accessor functions
        virtual std::string getName() const = 0;
        virtual int getAmount() const = 0;
};

#endif 