//
//  view.hpp
//  a4
//
//  Created by Cornelius Smith on 2019-03-14.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#ifndef view_h
#define view_h

#include <stdio.h>
#include "Product.h"
#include "Layout.h"

//Creates abstract view class
class View
{
public:
    virtual void render() =0;
    virtual void add(Product *products, int quant) = 0;
protected:
    Product *items;
    Layout *layout;
    int n;
};
#endif /* view_h*/
