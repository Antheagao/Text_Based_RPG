#ifndef WEAPONFACTORY_H
#define WEAPONFACTORY_H
#include "weapon.h"
#include "shortSword.cpp"
#include "longSword.cpp"
#include "greatSword.cpp"
#include "shortBow.cpp"
#include "longBow.cpp"
#include "greatBow.cpp"
#include "shortSpear.cpp"
#include "longSpear.cpp"
#include "greatSpear.cpp"

class WeaponFactory
{
    private:
        Weapon *ptr;
    public:
        // Default constructor
        WeaponFactory();

        // Destructor
        ~WeaponFactory();

        // Function to verify equipment thats given to user
        Weapon *generate(std::string &input);
};

#endif