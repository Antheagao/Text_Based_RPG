#ifndef LARGEPOTION_H
#define LARGEPOTION_H
#include "heal.h"

class LargePotion : public Heal
{
    private:
        std::string name;
        int amount;
    public:
        // Default constructor
        LargePotion();

        // Mutator functions
        virtual void setName(std::string name);
        virtual void setAmount(int amount);

        // Accessor functions
        virtual std::string getName() const;
        virtual int getAmount() const;
};

#endif
