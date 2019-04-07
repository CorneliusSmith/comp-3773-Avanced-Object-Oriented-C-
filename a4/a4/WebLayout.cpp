//
//  WebLayout.cpp
//  a4
//
//  Created by Cornelius Smith on 2019-03-15.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "WebLayout.h"
using namespace std;

//Sets the width of the screen
void WebLayout::setWidth(int w)
{
    width = w;
}

//Sets the columns of the table
void WebLayout::setColumns(int n)
{
    columns = n;
}

//Outputs the header of the table
void WebLayout::putHeader() const
{
    cout << "<td width=" << width << "%>" << endl;
}

//Adds the line at the start of each table row
void WebLayout::putLineStart() const
{
    cout << "<tr>" << endl;
}

//Outputs the elements of each string element of the row
void WebLayout::putElement(const string &e, int w) const
{
    cout << "<td width=" << w << "%>" << e << "</td>" << endl;
}

//Outputs the elements of each int element of the row
void WebLayout::putElement(int n, int w) const
{
    ;
}

//Ends the line the table row is on
void WebLayout::putLineEnd() const
{
    cout << "</tr>" << endl;
}

//Adds footer to the table
void WebLayout::putFooter() const
{
    cout << "</table>" << endl;
}
