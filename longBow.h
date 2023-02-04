#ifndef LONGBOW_H
#define LONGBOW_H
#include "weapon.h"

class LongBow : public Weapon 
{
    private:
        std::string name;
        int damage;
        int crit;
    public:
        // Default constructor
        LongBow();

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