#ifndef LONGSWORD_H
#define LONGSWORD_H
#include "weapon.h"

class LongSword : public Weapon
{
    private:
        std::string name;
        int damage;
        int crit;
    public:
        // Default constructor
        LongSword();

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