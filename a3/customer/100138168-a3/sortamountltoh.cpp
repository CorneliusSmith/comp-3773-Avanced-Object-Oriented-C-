//
//  sortamountltoh.cpp
//  customer
//
//  Created by Cornelius Smith on 2019-02-24.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#ifndef SORT_AMOUNTLTOH
#define SORT_AMOUNTLTOH

#include "abstractsort.h"

class SortAmountLTOH: public AbstractSort
{
    /* virtual */
    int needSwap(customer a, customer b)
    {
        int swap = 0;
        
        if (a.getAmount() < b.getAmount())
        {
            swap = 0;
        }
        else if(a.getAmount() == b.getAmount())
        {
            swap = 0;
        }
        else if(a.getAmount() > b.getAmount())
        {
            swap = 1;
        }
        return swap;
    }
};

#endif
