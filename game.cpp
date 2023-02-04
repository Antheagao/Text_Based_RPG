#include "game.h"

// Default constructor
Game::Game()
{
    playing = true;
    choice = 0;
    enemy = nullptr;
}

// Destructor
Game::~Game()
{
    delete enemy;
    enemy = nullptr;
}

// Functions that changes the game state to playing or not playing
void Game::setPlaying(bool playing)
{
    this->playing = playing;
}

// Function that returns if the game state is playing or not
bool Game::getPlaying() const
{
    return this->playing;
}

// Function for start menu that allows the user to start or quit the game
void Game::startMenu() 
{
    std::cout << "      Start Menu     " << std::endl;
    std::cout << "---------------------" << std::endl;
    std::cout << "| 1) Start the game |" << std::endl;
    std::cout << "| 2) Quit the game  |" << std::endl;
    std::cout << "---------------------" << std::endl;

    std::cin >> choice;
    while (choice < 1 || choice > 2)
    {
        std::cin >> choice;
    }
    switch (choice)
    {
        case 1: setPlaying(true);
                break;
        case 2: setPlaying(false);
                break;
    }
}

// Function for character menu to allow the user to select a character
void Game::charSelect() 
{
    // Display the text for user to pick character and get their choice
    std::cout << "Select one of 3 characters to play with" << std::endl;
    std::cout << "1) Character1, wielding a short sword with heavy armor" << std::endl;
    std::cout << "2) Character2, wielding a short bow with light armor" << std::endl;
    std::cout << "3) Character3, wielding a short spear with great armor" << std::endl;

    // Verify that the user entered a valid choice
    std::cin >> choice;
    while (choice < 1 || choice > 3)
    {
        std::cin >> choice;
    }
    std::string holder = "";
    // menu that displays text depending on the choice of the user
    switch (choice)
    {
        case 1: std::cout << "You chose character1 wielding a short sword with heavy armor\n";
                character.setWeapon("short sword");
                character.setArmor("heavy armor");
                holder = character.getWeapon();
                character.createWeapon(holder);
                character.addShortSword();
                holder = character.getArmor();
                character.createArmor(holder);
                character.addHeavyArmor();
                foundSmallPotion();
                break;
        case 2: std::cout << "You chose character2 wielding a short bow with light armor\n";
                character.setWeapon("short bow");
                character.setArmor("light armor");
                holder = character.getWeapon();
                character.createWeapon(holder);
                character.addShortBow();
                holder = character.getArmor();
                character.createArmor(holder);
                character.addLightArmor();
                foundSmallPotion();
                break;
        case 3: std::cout << "You chose character3 wielding a short spearwith great armor\n";
                character.setWeapon("short spear");
                character.setArmor("great armor");
                holder = character.getWeapon();
                character.createWeapon(holder);
                character.addShortSpear();
                holder = character.getArmor();
                character.createArmor(holder);
                character.addGreatArmor();
                foundSmallPotion();
                break;
    }
    
    // Ask the user to name their character and welcome them to the game
    std::string name;
    std::cout << "Enter the name of your character: ";
    std::cin.ignore();
    getline(std::cin, name);
    character.setName(name);
    std::cout << "welcome, " << character.getName() << std::endl;

    // Display the inventory to the user
    std::cout << "Your current inventory is: " << std::endl;
    showWeapons();
    showHeals();
    character.showArmors();
}

// Character mutator inventory functions for weapons
void Game::foundShortSword()
{
    character.addShortSword();
}

void Game::foundLongSword()
{
    character.addLongSword();
}

void Game::foundGreatSword()
{
    character.addGreatSword();
}

void Game::foundShortBow()
{
    character.addShortBow();
}

void Game::foundLongBow()
{
    character.addLongBow();
}

void Game::foundGreatBow()
{
    character.addGreatBow();
}

void Game::foundShortSpear()
{
    character.addShortSpear();
}

void Game::foundLongSpear()
{
    character.addLongSpear();
}

void Game::foundGreatSpear()
{
    character.addGreatSpear();
}

// Character mutator inventory functions for heals
void Game::foundSmallPotion()
{
    character.addSmallPotion();
}

void Game::foundLargePotion()
{
    character.addLargePotion();
}

void Game::foundMaxPotion()
{
    character.addMaxPotion();
}

// Character accessor functions
void Game::showWeapons()
{
    character.showWeapons();
}

void Game::showHeals()
{
    character.showHeals();
}

int Game::getSize()
{
    return character.showSize();
}

// Enemy generation functions
void Game::spawnEnemy()
{
    int spawner = rand() % 10;
    if (spawner < 4)
    {
        enemy = new Slime;
    }
    else if (spawner < 8)
    {
        enemy = new Goblin;
    }
    else if (spawner < 10)
    {
        enemy = new Witch;
    }
}

// Spawn special enemy
void Game::spawnSpecialEnemy()
{
    enemy = new Dragon;
}

// Battle function to begin battle
void Game::beginBattle()
{
    int ranLvl = rand() % 4;
    int ranGen = rand() % 10;
    spawnEnemy();
    if (character.getLevel() == 1)
    {
        enemy->setLevel(character.getLevel());
    }
    else if (ranGen < 5)
    {
        enemy->setLevel(character.getLevel() + ranLvl);
    }
    else if (ranGen > 5 && character.getLevel() > 5)
    {
        enemy->setLevel(character.getLevel() - ranLvl);
    }
    battleMenu(character, enemy);
}

void Game::beginSpecialBattle()
{
    spawnSpecialEnemy();
    battleMenu(character, enemy);
}

// Battle fucntion to let player attack
void Game::playerAttack()
{
    int attackDmg = 0;
    int enemyHp = 0;
    attackDmg = character.hit();
    if (rand() % 10 > 7)
    {
        attackDmg += character.critDmg();
    }
    enemyHp = enemy->getHealth() - attackDmg;
    enemy->setHealth(enemyHp);
}

// Battle function to have enemy attack
void Game::enemyAttack()
{
    int attackDmg = 0;
    int playerHp = 0;
    attackDmg = enemy->getDamage();
    if (rand() % 10 > 7)
    {
        attackDmg += enemy->getCrit();
    }
    attackDmg -= character.defend();
    playerHp = character.getHealth() - attackDmg;
    character.setHealth(playerHp);
}

// Battle function to let the user run from battle
bool Game::runBattle()
{
    bool ranAway = false;
    if (rand() % 10 > 5 && enemy->getName() != "dragon")
    {
        ranAway = true;
    }
    return ranAway;
}

// Battle function to let user access inventory
void Game::accessInventory()
{
    // initialize valid entry checker and display available heal items to user
    int valid = 0;
    showHeals();

    // verify that the user has items in the bag
    if (getSize() == 0)
    {
        std::cout << "You have no items to use" << std::endl;
        return;
    }
    // Check if the item is found in the bag and display it if true;
    std::cout << "Select the item you want to heal with or enter 0 to exit\n";
    std::cout << "0. exit to battle" << std::endl;
    if (character.verifySmPotion() == true)
    {
        std::cout << "1. small potion" << std::endl;
        valid = 1;
    }
    if (character.verifyLaPotion() == true)
    {
        std::cout << "2. large potion" << std::endl;
        valid = 2;
    }
    if (character.verifyMaPotion() == true)
    {
        std::cout << "3. max potion" << std::endl;
        valid = 3;
    }
    std::cin >> choice;
    while (choice < 0 || choice > valid)
    {
        std::cout << "re-enter your choice: ";
        std::cin >> choice;
    }
    switch (choice)
    {
        case 0: return;
                break;
        case 1: character.useSmallPotion();
                break;
        case 2: character.useLargePotion();
                break;
        case 3: character.useMaxPotion();
                break;
    }
}

// Main battle menu to loop and let the user make decisions
void Game::battleMenu(Character &character, Enemy *enemy)
{
    std::cout << "An enemy " << enemy->getName() << " has appeared:\n";
    while (character.getHealth() > 0 && enemy->getHealth() > 0)
    {
        // Display battle art and let user make choice
        battleArt(character, enemy);
        std::cout << "1. Attack" << std::endl;
        std::cout << "2. Inventory" << std::endl;
        std::cout << "3. Run" << std::endl;
        std::cout << "Enter your choice: ";

        // Verify the input of the user
        std::cin >> choice;
        while (choice < 1 || choice > 3)
        {
            std::cin >> choice;
        }

        // Perform action depending on the choice
        switch (choice)
        {
            case 1: playerAttack();
                    std::cout << character.getName() << " attacked the " 
                              << enemy->getName() << ", ";
                    break;
            case 2: accessInventory();
                    //std::cout << character.getName() << " used a heal item, ";
                    break;
            case 3: if (runBattle() == true)
                    {
                        enemy->setHealth(-999);
                    }
                    else 
                    {
                        std::cout << character.getName() 
                                  << " was not able to run away, ";
                    }
                    break;
        }

        // Let the enemy attack
        if (enemy->getHealth() > 0)
        {
            enemyAttack();
            std::cout << "The " << enemy->getName() << " attacked " 
                      << character.getName() << std::endl;
        }
    }

    // End the game if character health reaches 0
    if (character.getHealth() <= 0)
    {
        std::cout <<  character.getName() << " was defeated, game over" 
                  << std::endl;
        setPlaying(false);
    }
    // End the batlle if character runs
    else if (enemy->getHealth() == -999)
    {
        std::cout << character.getName() << " escaped the battle" << std::endl;
        delete enemy;
        enemy = nullptr;
    }
    // delete the enemy if enemy health reaches 0
    else if (enemy->getHealth() <= 0)
    {
        // Display that the enemy was defeated and delete the enemy
        std::cout << "The " << enemy->getName() << " has been defeated\n";

        // check if the player can level up
        int expp = enemy->getExpWorth();
        character.gainExp(expp);
        while (character.verifyUp())
        {
            character.levelUp();
            std::cout << character.getName() << " leveled up to level "
                      << character.getLevel() << std::endl;
        }

        // Random number to generate a heal item
        int genHeal = rand() % 10;
        if (genHeal < 7)
        {
            std::cout << "You got a small potion" << std::endl;
            foundSmallPotion();
        }
        else if (genHeal < 9)
        {
            std::cout << "You got a large potion" << std::endl;
            foundLargePotion();
        }
        else if (genHeal == 9)
        {
            std::cout << "You got a max potion" << std::endl;
            foundMaxPotion();
        }
        // Generate special weapon
        int genWpn = rand() % 10;
        if (enemy->getName() == "witch" && genWpn > 3 && genWpn < 7 
            && character.getWeapon() == "short sword")
        {
            std::string nmeWpn = "long sword";
            character.createWeapon(nmeWpn);
            character.addLongSword();
            character.setWeapon(nmeWpn);
            std::cout << "You got a long sword" << std::endl;
        }
        else if (enemy->getName() == "witch" && genWpn > 3 && genWpn < 7 
            && character.getWeapon() == "short bow")
        {
            std::string nmeWpn = "long bow";
            character.createWeapon(nmeWpn);
            character.addLongSword();
            character.setWeapon(nmeWpn);
            std::cout << "You got a long bow" << std::endl;
        }
        else if (enemy->getName() == "witch" && genWpn > 3 && genWpn < 7 
            && character.getWeapon() == "short spear")
        {
            std::string nmeWpn = "long spear";
            character.createWeapon(nmeWpn);
            character.addLongSword();
            character.setWeapon(nmeWpn);
            std::cout << "You got a long spear" << std::endl;
        }
        else if (enemy->getName() == "witch" && genWpn > 3 && genWpn < 7 
            && character.getWeapon() == "long sword")
        {
            std::string nmeWpn = "great sword";
            character.createWeapon(nmeWpn);
            character.addLongSword();
            character.setWeapon(nmeWpn);
            std::cout << "You got a great sword" << std::endl;
        }
        else if (enemy->getName() == "witch" && genWpn > 3 && genWpn < 7 
            && character.getWeapon() == "long bow")
        {
            std::string nmeWpn = "great bow";
            character.createWeapon(nmeWpn);
            character.addLongSword();
            character.setWeapon(nmeWpn);
            std::cout << "You got a great bow" << std::endl;
        }
        else if (enemy->getName() == "witch" && genWpn > 3 && genWpn < 7 
            && character.getWeapon() == "long spear")
        {
            std::string nmeWpn = "great spear";
            character.createWeapon(nmeWpn);
            character.addLongSword();
            character.setWeapon(nmeWpn);
            std::cout << "You got a great spear" << std::endl;
        }
        delete enemy;
        enemy = nullptr;
    }
}

// Battle art to be displayed at each turn in the battle
void Game::battleArt(Character &character, Enemy *enemy)
{
    std::cout << "__________________________________________________________\n";
    std::cout << "|" << std::setw(20) << enemy->getName() << std::setw(38) << "|\n";
    std::cout << "|      LVL: " << std::setw(3) << enemy->getLevel() 
              << "                                          |\n";
    std::cout << "|          -------------------           ~~~~~~          |\n";
    std::cout << "|      HP: |";
    if (enemy->getHealth() > enemy->getMaxHp() * 0.75)
    {
        std::cout << "*****************";            
    }
    else if (enemy->getHealth() > enemy->getMaxHp() * 0.50)
    {
        std::cout << "************     ";
    }
    else if (enemy->getHealth() > enemy->getMaxHp() * 0.25)
    {
        std::cout << "********         ";
    }
    else if (enemy->getHealth() > 0)
    {
        std::cout << "****             ";
    }
    else if (enemy->getHealth() < 0)
    {
        std::cout << "                 ";
    }
    std::cout << "|" << std::setw(10) << "          +      +         |\n";
    std::cout << "|          -------------------         +  0  0  +        |\n";
    std::cout << "|                                     +__________+       |\n";
    std::cout << "|        ~~~~~~                                          |\n";
    std::cout << "|      ~ +++++ ~                                         |\n";
    std::cout << "|       +     +           /\\                             |\n";
    std::cout << "|       +      +         / /                             |\n";
    std::cout << "|        +    +      ___/ /__                            |\n";
    std::cout << "|      ---|  |---   |_______|   " << std::setw(15) 
              << character.getName() << "          |\n";
    std::cout << "|     /         \\     / /        LVL: " << std::setw(3) 
              << character.getLevel() << "                |\n";
    std::cout << "|    /           \\   / /           -------------------   |\n";
    std::cout << "|   /             \\ / /        HP: |";
    if (character.getHealth() > character.getMaxHp() * 0.75)
    {
        std::cout << "*****************";            
    }
    else if (character.getHealth() > character.getMaxHp() * 0.50)
    {
        std::cout << "************     ";
    }
    else if (character.getHealth() > character.getMaxHp() * 0.25)
    {
        std::cout << "********         ";
    }
    else if (character.getHealth() > 0)
    {
        std::cout << "****             ";
    }
    else if (character.getHealth() < 0)
    {
        std::cout << "                 ";
    }
    std::cout << "|   |\n";
    std::cout << "|  /               \\               -------------------   |\n";
    std::cout << "|                                   " << std::setw(3) 
              << character.getHealth() << " / " << std::setw(3) 
              << character.getMaxHp() << "            |\n";
    std::cout << "|                                  ___________________   |\n";
    std::cout << "|                                 | Attack  Inventory |  |\n";
    std::cout << "|                                 | Run               |  |\n";
    std::cout << "|                                 ---------------------  |\n";
    std::cout << "|________________________________________________________|\n";
}

