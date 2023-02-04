#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>

// Enemy interface for inherited enemies to access
class Enemy 
{
    private:

    public:
        // Mutator funcitons
        virtual void setName(std::string name) = 0;
        virtual void setHealth(int health) = 0;
        virtual void setDamage(int damage) = 0;
        virtual void setCrit(int crit) = 0;
        virtual void setLevel(int level) = 0;
        virtual void setExpWorth(int expWorth) = 0;
        virtual void setMaxHp(int maxHp) = 0;

        // Accessor functions
        virtual std::string getName() const = 0;
        virtual int getHealth() const = 0;
        virtual int getDamage() const = 0;
        virtual int getCrit() const = 0;
        virtual int getLevel() const = 0;
        virtual int getExpWorth() const = 0;
        virtual int getMaxHp() const = 0;
};

#endif