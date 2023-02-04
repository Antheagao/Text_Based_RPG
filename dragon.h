#ifndef DRAGON_H
#define DRAGON_H
#include "enemy.h"

class Dragon : public Enemy 
{
    private:
        std::string name;
        int level;
        int maxHp;
        int health;
        int damage;
        int crit;
        int expWorth;
    public:
        // Default constructor
        Dragon();

        // Mutator funcitons
        virtual void setName(std::string name);
        virtual void setHealth(int health);
        virtual void setDamage(int damage);
        virtual void setCrit(int crit);
        virtual void setLevel(int level);
        virtual void setExpWorth(int expWorth);
        virtual void setMaxHp(int maxHp);

        // Accessor functions
        virtual std::string getName() const;
        virtual int getHealth() const;
        virtual int getDamage() const;
        virtual int getCrit() const;
        virtual int getLevel() const;
        virtual int getExpWorth() const;
        virtual int getMaxHp() const;
};

#endif