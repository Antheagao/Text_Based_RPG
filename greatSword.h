#ifndef GREATSWORD_H
#define GREATSWORD_H
#include "weapon.h"

class GreatSword : public Weapon 
{
    private:
        std::string name;
        int damage;
        int crit;
    public:
        // Default constructor
        GreatSword();

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