//
//  AustraliaFactory.cpp
//  lab5
//
//  Created by Cornelius Smith on 2019-03-21.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#include "AustraliaFactory.h"
#include "Rabbit.h"
#include "Dingo.h"

Herbivore* AustraliaFactory::CreateHerbivore()
{
    return new Rabbit;
}

Carnivore* AustraliaFactory::CreateCarnivore()
{
    return new Dingo;
}
