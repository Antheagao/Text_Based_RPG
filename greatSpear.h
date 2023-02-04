#ifndef GREATSPEAR_H
#define GREATSPEAR_H
#include "weapon.h"

class GreatSpear : public Weapon 
{
    private:
        std::string name;
        int damage;
        int crit;
    public:
        // Default constructor
        GreatSpear();

        // Mutator functions
        virtual void setName(std::string name);
        virtual void setDamage(int damage);
        virtual void setCrit(int crit);

        // Accessor funcitons
        virtual std::string getName() const;
        virtual int getDamage() const;
        virtual int getCrit() const;
};

#endif