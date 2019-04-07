//
//  sortpostal.cpp
//  customer
//
//  Created by Cornelius Smith on 2019-02-24.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#ifndef SORT_POSTAL
#define SORT_POSTAL

#include "abstractsort.h"

class SortPostal: public AbstractSort
{
    /* virtual */
    int needSwap(customer a, customer b)
    {
        int swap = 0;
        
        if (a.getPostal() < b.getPostal())
        {
            swap = 0;
        }
        else if(a.getPostal() == b.getPostal())
        {
            swap = 0;
        }
        else if(a.getPostal() > b.getPostal())
        {
            swap = 1;
        }
        return swap;
    }
};

#endif
