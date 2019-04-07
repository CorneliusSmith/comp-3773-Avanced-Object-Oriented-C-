//
//  Dingo.cpp
//  lab5
//
//  Created by Cornelius Smith on 2019-03-21.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//
#include "Dingo.h"

#include <iostream>
using namespace std;

// "ProductB1" 

void Dingo::Eat(Herbivore* h)
{
  // Eat Wildebeest 
  cout << "Dingo eats " << h->Name() << endl;
}

