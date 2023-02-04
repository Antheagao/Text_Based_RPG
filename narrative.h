#ifndef NARRATIVE_H
#define NARRATIVE_H
#include <iostream>

class Narrative 
{
    private:
        int choice;
    public:
        // Default constructor
        Narrative();

        // Mutator functions
        void setChoice(int choice);

        // Accessor functions
        int getChoice();

        // Story functions
        void act1V1();
        void act1Left();
        void act1Right();
        void act2v1();
        void act2Left();
        void act2Middle();
        void act2Right();
        void act3();
        void act3Rest();
        void act3Enter();
        void act4();
        void actFinal();
};

#endif