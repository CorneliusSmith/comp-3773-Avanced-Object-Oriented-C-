//
//  abstractsort.h
//  customer
//
//  Created by Cornelius Smith on 2019-02-20.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#ifndef ABSTRACT_SORT_H
#define ABSTRACT_SORT_H
#include <stdio.h>
#include "customer.h"

class AbstractSort
{
public:
    void sort(customer v[], int n);
private:
    virtual int needSwap(customer, customer) = 0;
    void doSwap(customer& a, customer& b);
};

#endif


