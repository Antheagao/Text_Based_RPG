#ifndef ARMORFACTORY_H
#define ARMORFACTORY_H
#include "armor.h"
#include "lightArmor.cpp"
#include "heavyArmor.cpp"
#include "greatArmor.cpp"

class ArmorFactory
{
    private:
        Armor *ptr;
    public:
        // Default constructor
        ArmorFactory();

        // Destructor
        ~ArmorFactory();

        // Function to verify equipment thats given to user
        Armor *create(std::string &input);
};

#endif