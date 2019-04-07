//
//  customer.h
//  customer
//
//  Created by Cornelius Smith on 2019-02-18.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//
#include <string>
#ifndef customer_h
#define customer_h
using namespace std;

class customer{

public:
    customer();
    customer(const string fName, const string gName, const string a1, const string a2, const string c, const string p, const string pCode, float aOwed);
    ~customer();
    string getFamily();
    string getName();
    string getAddress1();
    string getAddress2();
    string getCity();
    string getProvince();
    string getPostal();
    string readvalues();
    void writevalues(string arr[]);
    
    float getAmount();

    //bool operator>(istream& is,const customer& c);
private:
    string family_name;
    string given_name;
    string address1;
    string address2;
    string city;
    string province;
    string postal_code;
    float amount_owed;
};
#endif /* customer_h */
