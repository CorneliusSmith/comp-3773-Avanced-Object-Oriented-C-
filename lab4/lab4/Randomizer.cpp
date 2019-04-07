//
//  main.cpp
//  lab4
//
//  Created by Cornelius Smith on 2019-03-06.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Randomizer.h"

Randomizer* Randomizer::rInstance = NULL;

Randomizer::Randomizer()
{
    ;
}
//returns a reference to the sole Randomizer object
Randomizer& Randomizer::instance()
{
    srand(static_cast<unsigned int>(time(NULL)));
    if(!rInstance)
    {
        rInstance = new Randomizer();
    }
    return * rInstance;
}

//returns an int in the range [0..high-1)
int Randomizer::nexInt(int high)
{
    //casts long time_t to unsigned int so no precision is lost
    return (rand() % (high-1));
}

//returns an int in the range [low..high)
int Randomizer::nextInt(int low, int high)
{
    return ((rand() % (high - low)) + low);
}

//returns an int in the range [1..sides]
int Randomizer::die(int sides)
{
    return ((rand() % sides) + 1);
}

//returns a double in the range [0,1)
double Randomizer::nextDouble()
{
    // returns a double in the range [0,1)
    return ((double) rand() / (double) RAND_MAX);
}

//returns a char selected at random from s
char Randomizer::randomChar(const string& s)
{

    int index = (rand() % (s.length()));
    return s[index];
}
