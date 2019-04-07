//
//  main.cpp
//  customer
//
//  Created by Cornelius Smith on 2019-02-18.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#include <iostream>
#include "customer.h"
#include "abstractsort.h"
#include "sortname.cpp"
#include "sortpostal.cpp"
#include "sortamountltoh.cpp"
#include "sortamounthtol.cpp"

using namespace std;

customer::customer()
{
    family_name = "";
    given_name = "";
    address1 = "";
    address2 = "";
    city = "";
    province = "";
    postal_code = "";
    amount_owed = 0;
}

customer::customer(const string fName, const string gName, const string a1, const string a2, const string c, const string p, const string pCode, float aOwed)
{
    family_name = fName;
    given_name = gName;
    address1 = a1;
    address2 = a2;
    city = c;
    province = p;
    postal_code = pCode;
    amount_owed = aOwed;
}

customer::~customer()
{
    ;
}

string customer::getFamily()
{
    return family_name;
}

string customer::getName()
{
    return given_name;
}

string customer::getAddress1()
{
    return address1;
}

string customer::getAddress2()
{
    return address2;
}

string customer::getCity()
{
    return city;
}

string customer::getProvince()
{
    return province;
}

string customer::getPostal()
{
    return postal_code;
}

string customer::readvalues()
{
    return "|" + this->getFamily() + "|" + this->getName() + "|" + this->getAddress1() + "|"
    + this->getAddress2() + "|" + this->getCity() + "|" + this->getProvince() + "|"
    + this->getPostal() + "|" + to_string(this->getAmount()) + "|";
}

void customer::writevalues(string arr[])
{
    
    this->family_name = arr[0];
    this->given_name = arr[1];
    this->address1 = arr[2];
    this->address2 = arr[3];
    this->city = arr[4];
    this->province = arr[5];
    this->postal_code = arr[6];
    this->amount_owed = stof(arr[7]);
}

float customer::getAmount()
{
    return amount_owed;
}

/*bool customer::operator>>(istream& is,customer& c)
{
    is >> c.family_name;

    return is;
}
*/
ostream &operator<<(ostream&os, customer& c)
{
    os << "Customer Info: " << c.readvalues() << endl;
    return os;
}

istream &operator>>(istream& is, customer& c)
{
    string line;
    string array[8];
    
    is.ignore(256,'|');
    for (int i = 0; i < 8; i++)
    {
        getline(is, line, '|');
        array[i] = line;
    }
    c.writevalues(array);
    return is;
}
