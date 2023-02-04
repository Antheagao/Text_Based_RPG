#ifndef GREATARMOR_H
#define GREATARMOR_H
#include "armor.h"

class GreatArmor : public Armor 
{
    private:
        std::string name;
        int defense;
    public:
        // Default constructor
        GreatArmor();

        // Mutator functions
        virtual void setName(std::string name);
        virtual void setDefense(int defense);

        // Accessor functions
        virtual std::string getName() const;
        virtual int getDefense() const;
};

#endif