#include "narrative.h"

// Default constructor
Narrative::Narrative()
{
    this->choice = 0;
}

// Mutator functions
void Narrative::setChoice(int choice)
{
    this->choice = choice;
}

// Accessor functions
int Narrative::getChoice()
{
    return this->choice;
}

// Story funcitons (act 1 part 1)
void Narrative::act1V1()
{
    std::cout << "You wake up in the middle of the night, it is cold as always" << std::endl;
    std::cout << "Remembering that you had a long day protecting the village ";
    std::cout << "you slowly fall back asleep" << std::endl;
    std::cout << "You are woken up by the sun shining through the window." << std::endl;
    std::cout << "The scorched ground around the village reminds you that the corrupt ";
    std::cout << "dragons and their minions are a danger to your friends." << std::endl;
    std::cout << "To stop the constant attacks, you must go on a journey to defeat the ";
    std::cout << "ancient corrupt dragon" << std::endl;
    std::cout << "As you exit the village, there are two pathways, ";
    std::cout << "1. Left, 2. Right: ";
}

// Story act 1 part 2
void Narrative::act1Left()
{
    std::cout << "Behind a neaby tree you spot an enemy hiding, you decide to approach it\n";
}

void Narrative::act1Right()
{
    std::cout << "Eveything seems to be clear so far, but who knows what lies up ahead....\n";
    std::cout << "There seems to be an open grassland with a cave past it," << std::endl;
    std::cout << "Before you can think about where to go, enemies approach you\n";
}

void Narrative::act2v1()
{
    std::cout << "You reach the entrance of a cave that you have never seen before\n";
    std::cout << "Although you have traveled past this area many times, it's as if ";
    std::cout << "it is a new cave that somehow appeared\n";
    std::cout << "There are 3 different paths, which will you travel through?\n";
    std::cout << "1. Dark Tunnel, 2. Straight path, 3. Swampy path: ";
}

void Narrative::act2Left()
{
    std::cout << "Its far too dark to see anything, you light a torch to get a better view ";
    std::cout << "of your surroundings.\n";
    std::cout << "However, the light only alerted nearby minions where you were, ";
    std::cout << "several minions surround you as you prepare to fight them.\n";
}

void Narrative::act2Middle()
{
    std::cout << "To your surprise, the stright path seems to be the safest,\n";
    std::cout << "It would not be surprising if there were traps nearby to trick you.\n";
    std::cout << "Dripping blood from the ceiling reveals a minion that has been watching you.\n";
}

void Narrative::act2Right()
{
    std::cout << "an enemy immedietly grabs you into battle\n";
}

void Narrative::act3()
{
    std::cout << "You make it past the first few tunnels, but it still appears that there is";
    std::cout << " not an exit nearby.\n";
    std::cout << "There is the sound of a sudden roar from all arounds you, ";
    std::cout << "the sounds seems to have come from somewhere deeper in the cave.";
    std::cout << "You begin to feel nervous as the sound might be a young dragon\n";
    std::cout << "What will you do next, 1. Relax for a few minutes, 2. Enter deeper: ";
}

void Narrative::act3Rest()
{
    std::cout << "The short break is relaxing and givs you confidence to move on\n";
    std::cout << "before you could stand back up, several minions crawl out from small ";
    std::cout << "holes to attack you\n";
}

void Narrative::act3Enter()
{
    std::cout << "The lighting gets worse as you traverse deeper into this unknown cave.\n";
    std::cout << "Even the torch does not seem to be working very well under these circumstances\n";
    std::cout << "You see small lights glowing around you, realizing its more minions\n";
}

void Narrative::act4()
{
    std::cout << "Luckily you made it past the last battles.\n";
    std::cout << "The minions in this cave seem to be much stronger than those near ";
    std::cout << "the village.\n";
    std::cout << "It must have something to do with the creature that made the loud roar ";
    std::cout << "earlier";
    std::cout << "Just as you thought that, you see a young dragon crawl out of a nest.\n";
    std::cout << "It makes another roar, flaps its wings, and runs towards you.\n";
}

void Narrative::actFinal()
{
    std::cout << "As you defeated the dragon, you notice the cave start to light up\n";
    std::cout << "It must have been using some type of magic to make the area more dangerous\n";
    std::cout << "You take a back exit from the cave and see that the land around you ";
    std::cout << "is less dangerous than before you defeated the dragon.\n";
    std::cout << "More animals surrounds the area enjoying their freedom\n";
    std::cout << "You decide to work harder to create a peaceful land that everyone ";
    std::cout << "could enjoy.\n";
    std::cout << "Although for now, you head home to recover from recent battles\n";
    std::cout << "--------------------END OF THIS ACT------------------------\n";
}