#ifndef HEAVYARMOR_H
#define HEAVYARMOR_H
#include "armor.h"

class HeavyArmor : public Armor 
{
    private:
        std::string name;
        int defense;
    public:
        // Default constructor
        HeavyArmor();

        // Mutator functions
        virtual void setName(std::string name);
        virtual void setDefense(int defense);

        // Accessor functions
        virtual std::string getName() const;
        virtual int getDefense() const;
};

#endif