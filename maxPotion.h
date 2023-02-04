#ifndef MAXPOTION_H
#define MAXPOTION_H
#include "heal.h"

class MaxPotion : public Heal 
{
    private:
        std::string name;
        int amount;
    public:
        // Default constructor
        MaxPotion();

        // Mutator functions
        virtual void setName(std::string name);
        virtual void setAmount(int amount);

        // Accessor functions
        virtual std::string getName() const;
        virtual int getAmount() const;
};

#endif