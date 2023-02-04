#ifndef LIGHTARMOR_H
#define LIGHTARMOR_H
#include "armor.h"

class LightArmor : public Armor 
{
    private:
        std::string name;
        int defense;
    public:
        // Default constructor
        LightArmor();

        // Mutator functions
        virtual void setName(std::string name);
        virtual void setDefense(int defense);

        // Accessor functions
        virtual std::string getName() const;
        virtual int getDefense() const;
};

#endif