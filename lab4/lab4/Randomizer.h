//
//  Randomizer.h
//  lab4
//
//  Created by Cornelius Smith on 2019-03-06.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//
#include <string>
using namespace std;

#ifndef Randomizer_h
#define Randomizer_h
class Randomizer{
public:
    static Randomizer& instance();
    int nexInt(int high);
    int nextInt(int low, int high);
    int die(int sides);
    double nextDouble();
    char randomChar(const string & s);
private:
    Randomizer();
    Randomizer(const Randomizer&);
    Randomizer& operator=(Randomizer const&);
    static Randomizer * rInstance;
};
#endif /* Randomizer_h */
