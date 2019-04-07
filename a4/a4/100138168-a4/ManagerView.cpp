//
//  ManagerView.cpp
//  a4
//
//  Created by Cornelius Smith on 2019-03-15.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#include <iostream>
#include <string>
#include "ManagerView.h"
using namespace std;

//Sets the layout of the ManagerView
ManagerView::ManagerView(Layout * lay)
{
    layout = lay;
}
//Renders the table
void ManagerView::render()
{
    layout->setWidth(100);
    layout->setColumns(3);
    layout->putHeader();
    int i = 0;
    while (i < n)
    {
        layout->putLineStart();
        layout->putElement(items[i].getCode(), 30);
        layout->putElement(items[i].getName(), 50);
        layout->putElement(items[i].getQuantity(), 20);
        layout->putLineEnd();
        i++;
    }
    layout->putFooter();
}

//Adds the products to the ManagrView
void ManagerView::add(Product *products, int quant)
{
    items = products;
    n = quant;
}
