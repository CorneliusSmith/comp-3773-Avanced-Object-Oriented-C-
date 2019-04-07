//
//  sortmain.cpp
//  customer
//
//  Created by Cornelius Smith on 2019-02-24.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#include <iostream>
#include "abstractsort.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int NUM = 10;
    int array[NUM];
    srand((unsigned)time(0));
    for (int i = 0; i < NUM; i++)
    {
        array[i] = rand() % 10+1;
        cout << array[i] << ' ';
    }
    cout << '\n';
    
   /* AbstractSort *sortObjects[] =
    {
        new SortUp, new SortDown
    };
    sortObjects[0]->sort(array, NUM);
    for (int u = 0; u < NUM; u++)
        cout << array[u] << ' ';
    cout << '\n';
    
    sortObjects[1]->sort(array, NUM);
    for (int d = 0; d < NUM; d++)
        cout << array[d] << ' ';
    cout << '\n';*/
}

