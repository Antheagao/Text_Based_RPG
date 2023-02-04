#ifndef ARMOR_H
#define ARMOR_H
#include <iostream>

class Armor 
{
    private:

    public:
        // Mutator functions
        virtual void setName(std::string name) = 0;
        virtual void setDefense(int defense) = 0;

        // Accessor functions
        virtual std::string getName() const = 0;
        virtual int getDefense() const = 0;
};

#endif