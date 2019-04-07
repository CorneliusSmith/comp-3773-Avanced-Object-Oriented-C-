//
//  CustomerView.cpp
//  a4
//
//  Created by Cornelius Smith on 2019-03-14.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#include <stdio.h>
#include "CustomerView.h"

//Sets the layout of the CustomerView
CustomerView::CustomerView(Layout * lay)
{
    layout = lay;
}

//Renders the table
void CustomerView::render()
{
    layout->setWidth(40);
    layout->putHeader();
    int i = 0;
    while (i < n)
    {
        layout->putLineStart();
        layout->putElement(items[i].getName(), 100);
        layout->putLineEnd();
       i++;
    }
    layout->putFooter();
}

//Adds the products to the CustomerView
void CustomerView::add(Product *products, int quant)
{
    items = products;
    n = quant;
}
