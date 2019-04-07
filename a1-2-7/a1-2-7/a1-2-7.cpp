//
//  main.cpp
//  a1-2-7
//
//  Created by Cornelius Smith on 2019-01-17.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#include <iostream>
#include <cmath>

int recurs(double x, int n)
{
    if ( (n%2) == 0 )
    {
        x = pow(x, n/2) * pow(x, n/2);
        std::cout << x <<"even\n";
    }
    else
    {
        x = x * pow(x, n/2) * pow(x, n/2);
        std::cout << "odd\n" ;
    }
    std::cout << x << " " << n << "\n";
    return EXIT_SUCCESS;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    double x = 0;
    int y = 0;
    
    recurs(2.3, 3);
    std::cout << "Please enter a double and a number\n";
    while (true)
    {
        std::cin >> x >> y;
        if (std::cin.fail())
        {
            std::cerr << "no integer values found\n";
            return EXIT_FAILURE;
        }
        else if (x <= -1 || x >= 100)
        {
            break;
        }
        else
        {
            recurs(x,y);
        }
    }
    return EXIT_SUCCESS;
}
