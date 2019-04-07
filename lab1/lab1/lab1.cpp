//
//  lab1.cpp
//
//  Created by Cornelius Smith on 2019-01-16.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#include <iostream>
#include <string>

int main() {
    int value = 0;
    int min_value = 100;
    int sum_value = 0;
    int count = 0;
    float avg = 0;
    
    std::cout << "Please enter a Number\n";
    while (true)
    {
        std::cin >> value;
        if (std::cin.fail())
        {
            std::cerr << "no integer values found\n";
            return EXIT_FAILURE;
        }
        else if (value <= -1 || value >= 100)
        {
            break;
        }
        else
        {
            if (min_value > value)
            {
                min_value = value;
            }
            sum_value += value;
            count++;
        }
    }
    avg = (float) sum_value / (float) count;
    std::cout << "Your avg value is: " << avg << "\n";
    std::cout << "Your minimum value is: " << min_value << "\n";
    return EXIT_SUCCESS;
}

