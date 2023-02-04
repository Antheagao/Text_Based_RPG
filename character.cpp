#include "character.h"

// Default Constructor 
Character::Character()
{
    this->name = "";
    this->weapon = "";
    this->level = 1;
    this->maxHp = 25;
    this->health = maxHp;
    this->exp = 0;
    this->defense = 0;
    this->maxExp = 1;
    tool = nullptr;
    wear = nullptr;
}

// Destructor
Character::~Character()
{
    delete tool;
    delete wear;
    tool = nullptr;
    wear = nullptr;
}

// Mutator functions
void Character::setName(std::string name)
{
    this->name = name;
}

void Character::setWeapon(std::string weapon)
{
    this->weapon = weapon;
}

void Character::setArmor(std::string armor)
{
    this->armor = armor;
}

void Character::setLevel(int level)
{
    this ->level = level;
}

void Character::setHealth(int health)
{
    this->health = health;
}

void Character::setExp(int exp)
{
    this->exp = exp;
}

void Character::setMaxHp(int maxHp) 
{
    this->maxHp = maxHp;
}

// Accessor Functions
std::string Character::getName() const 
{
    return this->name;
}

std::string Character::getWeapon() const 
{
    return this->weapon;
}

std::string Character::getArmor() const 
{
    return this->armor;
}

int Character::getLevel() const 
{
    return this->level;
}

int Character::getHealth() const 
{
    return this->health;
}

int Character::getExp() const 
{
    return this->exp;
}

int Character::getMaxHp() const 
{
    return this->maxHp;
}

// Mutator Inventory functions for weapons
void Character::addShortSword()
{
    Weapon *weapon = new ShortSword;
    inventory.addWeapon(weapon);
}

void Character::addLongSword()
{
    Weapon *weapon = new LongSword;
    inventory.addWeapon(weapon);
}

void Character::addGreatSword()
{
    Weapon *weapon = new GreatSword;
    inventory.addWeapon(weapon);
}

void Character::addShortBow()
{
    Weapon *weapon = new ShortBow;
    inventory.addWeapon(weapon);
}

void Character::addLongBow()
{
    Weapon *weapon = new LongBow;
    inventory.addWeapon(weapon);
}

void Character::addGreatBow()
{
    Weapon *weapon = new GreatBow;
    inventory.addWeapon(weapon);
}

void Character::addShortSpear()
{
    Weapon *weapon = new ShortSpear;
    inventory.addWeapon(weapon);
}

void Character::addLongSpear()
{
    Weapon *weapon = new LongSpear;
    inventory.addWeapon(weapon);
}

void Character::addGreatSpear()
{
    Weapon *weapon = new GreatSpear;
    inventory.addWeapon(weapon);
}

// Mutator Inventory functions for armor
void Character::addLightArmor()
{
    Armor *armor = new LightArmor;
    inventory.addArmor(armor);
}

void Character::addHeavyArmor()
{
    Armor *armor = new HeavyArmor;
    inventory.addArmor(armor);
}

void Character::addGreatArmor()
{
    Armor *armor = new GreatArmor;
    inventory.addArmor(armor);
}

// Mutator Inventory funcitons for heals
void Character::addSmallPotion() 
{
    Heal *heal = new SmallPotion;
    inventory.addHeal(heal);
}

void Character::addLargePotion()
{
    Heal *heal = new LargePotion;
    inventory.addHeal(heal);
}

void Character::addMaxPotion()
{
    Heal *heal = new MaxPotion;
    inventory.addHeal(heal);
}

// Accessor inventory functions
void Character::showWeapons()
{
    inventory.showWeapon();
}

int Character::showSize()
{
    return inventory.showHealSize();
}

void Character::showHeals()
{
    inventory.showHeal();
}

void Character::showArmors()
{
    inventory.showArmor();
}

// Character using heal item functions
bool Character::verifySmPotion()
{
    return inventory.gotSmPotion();
}
bool Character::verifyLaPotion()
{
    return inventory.gotLaPotion();
}
bool Character::verifyMaPotion()
{
    return inventory.gotMaPotion();
}

void Character::useSmallPotion()
{
    int valueHp = 0;
    if (getHealth() == getMaxHp())
    {
        std::cout << "you are already full health" << std::endl;
    }
    valueHp = getHealth() + inventory.smallAmount();
    if (valueHp > getMaxHp())
    {
        valueHp = getMaxHp();
    }
    setHealth(valueHp);
}

void Character::useLargePotion()
{
    int valueHp = 0;
    if (getHealth() == getMaxHp())
    {
        std::cout << "you are already full health" << std::endl;
    }
    valueHp = getHealth() + inventory.largeAmount();
    if (valueHp > getMaxHp())
    {
        valueHp = getMaxHp();
    }
    setHealth(valueHp);
}

void Character::useMaxPotion()
{
    int valueHp = 0;
    if (getHealth() == getMaxHp())
    {
        std::cout << "you are already full health" << std::endl;
    }
    valueHp = getHealth() + inventory.maxAmount();
    if (valueHp > getMaxHp())
    {
        valueHp = getMaxHp();
    }
    setHealth(valueHp);
}

// Attacking functions
int Character::hit()
{
    return tool->getDamage();
}

int Character::defend()
{
    return wear->getDefense();
}

int Character::critDmg()
{
    return tool->getCrit();
}

// Factory functions
void Character::createWeapon(std::string &input)
{
    WeaponFactory factory;
    tool = factory.generate(input);
    //inventory.addWeapon(tool);
}

void Character::createArmor(std::string &input)
{
    ArmorFactory factory;
    wear = factory.create(input);
    //inventory.addArmor(wear);
}

// Level up functions
bool Character::verifyUp()
{
    bool checker = false;
    if (this->exp >= this->maxExp)
    {
        checker = true;
    }
    return checker;
}

void Character::levelUp()
{
    this->level += 1;
    this->maxHp += 4;
    if (this->exp >= this->maxExp)
    {
        this->exp -= this->maxExp;
    }
    else 
    {
        this->exp = 0;
    }
    this->maxExp = level * level * level;
}

void Character::gainExp(int worth)
{
    this->exp += worth;
}