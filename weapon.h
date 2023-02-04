#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>

// Weapon interface for inherited weapons to access
class Weapon 
{
    private:
        
    public:
        // Mutator Functions
        virtual void setName(std::string name) = 0;
        virtual void setDamage(int damage) = 0;
        virtual void setCrit(int crit) = 0;

        // Accessor Functions
        virtual std::string getName() const = 0;
        virtual int getDamage() const = 0;
        virtual int getCrit() const = 0;
};

#endif