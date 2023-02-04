#include <iostream>
#include <cstdlib>          // Random Function Library
#include <ctime>            // Time Library
#include "game.cpp"
#include "narrative.cpp"


int main(int argc, char **argv)
{
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));

    // Declare game and narrative
    Game game;
    Narrative narrative;
    int choice = 0;

    // Run the game until user chooses to quit
    do 
    {
        // Display the start menu to the user
        game.startMenu();

        // If the game is playing, user picks character
        if (game.getPlaying())
        {
            game.charSelect();
        }
        // Begin act1V1
        if (game.getPlaying())
        {
            narrative.act1V1();
            std::cin >> choice;
        }
        while (choice < 1 || choice > 2 && game.getPlaying())
        {
            std::cin >> choice;
        }
        // Act1 left
        if (choice == 1 && game.getPlaying())
        {
            narrative.act1Left();
            game.beginBattle();
        }
        // Act1 right
        else if (choice == 2 && game.getPlaying())
        {
            narrative.act1Right();
            game.beginBattle();
        }
        // Act 2
        if (game.getPlaying())
        {
            narrative.act2v1();
            std::cin >> choice;
        }
        while (choice < 1 || choice > 3 && game.getPlaying())
        {
            std::cin >> choice;
        }
        if (choice == 1 && game.getPlaying())
        {
            narrative.act2Left();
            game.beginBattle();
            game.beginBattle();
            game.beginBattle();
        }
        else if (choice == 2 && game.getPlaying())
        {
            narrative.act2Middle();
            game.beginBattle();
        }
        else if (choice == 3 && game.getPlaying())
        {
            narrative.act2Right();
            game.beginBattle();
        }
        // Act 3
        if (game.getPlaying())
        {
            narrative.act3();
            std::cin >> choice;
        }
        while (choice < 1 || choice > 2 && game.getPlaying())
        {
            std::cin >> choice;
        }
        // Act 3 rest
        if (choice == 1 && game.getPlaying())
        {
            narrative.act3Rest();
            game.beginBattle();
            game.beginBattle();
        }
        // Act 3 enter
        else if (choice == 2 && game.getPlaying())
        {
            narrative.act3Enter();
            game.beginBattle();
            game.beginBattle();
        }
        if (game.getPlaying())
        {
            narrative.act4();
            game.beginSpecialBattle();
        }
        if (game.getPlaying())
        {
            narrative.actFinal();
            game.setPlaying(false);
        }


    } while (game.getPlaying());
    
    return 0;
}