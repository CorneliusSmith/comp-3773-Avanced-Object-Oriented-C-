//
//  sortname.cpp
//  customer
//
//  Created by Cornelius Smith on 2019-02-24.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#ifndef SORT_NAME
#define SORT_NAME

#include "abstractsort.h"

class SortName: public AbstractSort
{
    /* virtual */
    int needSwap(customer a, customer b)
    {
        int swap = 0;
        
        if (a.getName() < b.getName())
        {
            swap = 0;
        }
        else if(a.getName() == b.getName())
        {
            swap = 0;
            if (a.getFamily() < b.getFamily())
            {
                swap = 0;
            }
            else
            {
                swap = 1;
            }
        }
        else if(a.getName() > b.getName())
        {
            swap = 1;
        }
        return swap;
    }
};

#endif
