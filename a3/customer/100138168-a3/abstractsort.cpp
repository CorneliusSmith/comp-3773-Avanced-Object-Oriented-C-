//
//  abstractsort.cpp
//  customer
//
//  Created by Cornelius Smith on 2019-02-20.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#include "abstractsort.h"

void AbstractSort::sort(customer v[], int n)
{
    // shell sort
    for (int g = n / 2; g > 0; g /= 2)
        for (int i = g; i < n; i++)
            for (int j = i - g; j >= 0; j -= g)
                if (needSwap(v[j], v[j + g]))
                    doSwap(v[j], v[j + g]);
}

void AbstractSort::doSwap(customer& a, customer& b)
{
    customer t = a;
    a = b;
    b = t;
}

