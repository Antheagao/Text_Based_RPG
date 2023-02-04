#ifndef SHORTSPEAR_H
#define SHORTSPEAR_H
#include "weapon.h"

class ShortSpear : public Weapon
{
    private:
        std::string name;
        int damage;
        int crit;
    public:
        // Default constructor
        ShortSpear();
        
        // Mutator functions
        virtual void setName(std::string name);
        virtual void setDamage(int damage);
        virtual void setCrit(int crit);

        // Accessor Functions
        virtual std::string getName() const;
        virtual int getDamage() const;
        virtual int getCrit() const;
};

#endif