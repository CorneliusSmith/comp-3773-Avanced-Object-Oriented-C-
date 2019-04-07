//
//  AustraliaFactory.h
//  lab5
//
//  Created by Cornelius Smith on 2019-03-21.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#ifndef AUSTRALIA_FACTORY_H
#define AUSTRALIA_FACTORY_H

#include "ContinentFactory.h"

// "ConcreteFactory3"

class AustraliaFactory : public ContinentFactory
{
public:
    virtual Herbivore* CreateHerbivore();
    virtual Carnivore* CreateCarnivore();
};

#endif
