//
//  ScreenLayout.cpp
//  a4
//
//  Created by Cornelius Smith on 2019-03-15.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "ScreenLayout.h"
using namespace std;

//Sets the width of the screen
void ScreenLayout::setWidth(int w)
{
    width = w;
}

//Sets the columns of the table
void ScreenLayout::setColumns(int n)
{
    columns = n;
}

//Outputs the header of the table
void ScreenLayout::putHeader(void) const
{
    cout << "+";
    for (int i =0; i < (width * 60/100 - 2); i++)
    {
        cout << "-";
    }
    cout << "+" << endl;
}

//Adds the line at the start of each table row
void ScreenLayout::putLineStart() const
{
    cout << "| ";
}

//Outputs the elements of each string element of the row
void ScreenLayout::putElement(const string &e, int w) const
{
    cout << left << setw(w * (width * 60)/100/100 - 4) << e << " | ";
}

//Outputs the elements of each int element of the row
void ScreenLayout::putElement(int n, int w) const
{
    cout << right << setw((w * 60)/100 - 2) << n << " | ";
}

//Ends the line the table row is on
void ScreenLayout::putLineEnd() const
{
    cout << endl;
}

//Adds footer to the table
void ScreenLayout::putFooter() const
{
    cout << "+";
    for (int i =0; i < (width * 60/100 - 2); i++)
    {
        cout << "-";
    }
    cout << "+";
}
