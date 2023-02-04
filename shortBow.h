#ifndef SHORTBOW_H
#define SHORTBOW_H
#include "weapon.h"

class ShortBow : public Weapon
{
    private:
        std::string name;
        int damage;
        int crit;
    public:
        // Default constructor
        ShortBow();
        
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