//
//  main.cpp
//  a1-3-2
//
//  Created by Cornelius Smith on 2019-01-26.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#include <iostream>

class construct
{
public:
    int numerator;
    int denominator;
    
    construct()
    {
        numerator = 0;
        denominator = 0;
    }
};

int gcd(int num, int denom)
{
    if (num == 0)
    {
        return denom;
    }
    return gcd(denom%num, num);
}

void lcd(int &denom, int &num)
{
    // Finding gcd of both terms
    int common_factor = gcd(num,denom);
    
    // Converting both terms into simpler
    // terms by dividing them by common factor
    denom = denom/common_factor;
    num = num/common_factor;
}

int add(construct frac1, construct frac2)
{
    int denom = 0;
    int num = 0;
    
    if (frac1.numerator == 0 || frac1.denominator == 0 || frac2.numerator == 0 || frac2.denominator == 0 )
    {
        std::cerr << "Divide by 0 error\n";
        return EXIT_FAILURE;
    }
    else
    {
        denom = gcd(frac1.denominator, frac2.denominator);
        denom = (frac1.denominator * frac2.denominator) / denom;
        num = frac1.numerator * (denom/frac1.denominator) + frac2.numerator * (denom/frac2.denominator);
    }
    lcd (denom, num);
    printf("%d/%d\n", num,denom);
    return EXIT_SUCCESS;
}

int subtract(construct frac1, construct frac2)
{
    int denom = 0;
    int num = 0;
    
    if (frac1.numerator == 0 || frac1.denominator == 0 || frac2.numerator == 0 || frac2.denominator == 0 )
    {
        std::cerr << "Divide by 0 error\n";
        return EXIT_FAILURE;
    }
    else
    {
        denom = gcd(frac1.denominator, frac2.denominator);
        denom = (frac1.denominator * frac2.denominator) / denom;
        num = frac1.numerator * (denom/frac1.denominator) - frac2.numerator * (denom/frac2.denominator);
    }
    lcd (denom, num);
    printf("%d/%d\n", num,denom);
    return EXIT_SUCCESS;
}

int multiply(construct frac1, construct frac2)
{
    int denom = 0;
    int num = 0;
    
    if (frac1.numerator == 0 || frac1.denominator == 0 || frac2.numerator == 0 || frac2.denominator == 0 )
    {
        std::cerr << "Divide by 0 error\n";
        return EXIT_FAILURE;
    }
    else
    {
        denom = frac1.denominator * frac2.denominator;
        num = frac1.numerator * frac2.numerator;
    }
    lcd (denom, num);
    printf("%d/%d\n", num,denom);
    return EXIT_SUCCESS;
}

int divide(construct frac1, construct frac2)
{
    int denom = 0;
    int num = 0;
    
    if (frac1.numerator == 0 || frac1.denominator == 0 || frac2.numerator == 0 || frac2.denominator == 0 )
    {
        std::cerr << "Divide by 0 error\n";
        return EXIT_FAILURE;
    }
    else
    {
        denom = frac1.denominator * frac2.numerator;
        num = frac1.numerator * frac2.denominator;
    }
    lcd (denom, num);
    printf("%d/%d\n", num,denom);
    return EXIT_SUCCESS;
}
int main(int argc, const char * argv[])
{
    // insert code here...
    construct frac1;
    construct frac2;
    char symbol;
    bool bl = 0;
    
    while (1)
    {
        
        std::cout << "Please enter 0 to exit or 1 to continue\n";
        std::cin >> bl;
        if (bl)
        {
            ;
        }
        else
        {
            break;
        }
        std::cout << "Please enter a numerator and denominator for fraction 1\n";
        std::cin >> frac1.numerator >> frac1.denominator;
        std::cout << "Please enter a numerator and denominator for fraction 2:\n ";
        std::cin >> frac2.numerator >> frac2.denominator;
        std::cout << "Please enter what operation you would like to perform +, -, *, /:\n ";
        std::cin >> symbol;
        switch (symbol)
        {
            case '+':
                std::cout << frac1.numerator << "/"
                << frac1.denominator << " + " << frac2.numerator << "/"
                << frac2.denominator << "\n";
                add(frac1, frac2);
                break;
            case '-':
                std::cout << frac1.numerator << "/"
                << frac1.denominator << " - " << frac2.numerator << "/"
                << frac2.denominator << "\n";
                subtract(frac1, frac2);
                break;
            case '*':
                std::cout << frac1.numerator << "/"
                << frac1.denominator << " * " << frac2.numerator << "/"
                << frac2.denominator << "\n";
                multiply(frac1, frac2);
                break;
            case '/':
                std::cout << frac1.numerator << "/"
                << frac1.denominator << " / " << frac2.numerator << "/"
                << frac2.denominator << "\n";
                divide(frac1, frac2);
                break;
            default:
                break;
        }
        
    }
    return 0;
}
