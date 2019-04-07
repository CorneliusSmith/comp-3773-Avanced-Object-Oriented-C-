//
//  main.cpp
//  a1-2-9
//
//  Created by Cornelius Smith on 2019-01-18.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#include <iostream>
double average(int n)
{
    double avg = 0;
    int count = 0;
    int sum = 0;
    int array[n];
    
    std::cout << "Please enter " << n << " numbers to fill the array\n";
    while (count < n)
    {
        std::cin >> array[count];
        if (std::cin.fail())
        {
            std::cerr << "no integer values found\n";
            return EXIT_FAILURE;
        }
        else
        {
            sum += array[count];
        }
        count++;
    }
    avg = (double)sum / (double)count;
    std::cout << "This is your avg:";
    return avg;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << average(3) << "\n";
    return 0;
}
