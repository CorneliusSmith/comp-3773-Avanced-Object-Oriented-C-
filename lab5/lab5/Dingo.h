//
//  Dingo.h
//  lab5
//
//  Created by Cornelius Smith on 2019-03-21.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//
#ifndef DINGO_H
#define DINGO_H

#include "Carnivore.h"

// "ProductB1" 

class Dingo : public Carnivore
{
  public:
    virtual void Eat(Herbivore* h);
};

#endif
