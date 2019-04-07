//
//  Integer7.cpp
//  a6
//
//  Created by Cornelius Smith on 2019-03-29.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#include <iostream>
#include "Integer7.h"

Integer7::Integer7(int value)
{
    value_= value;
}

int Integer7::get() const
{
    return value_;
}

void Integer7::set(int value)
{
    value_ = value;
}

Integer7& Integer7::operator+=(const Integer7 &i)
{
    this->value_ = (this->value_ + i.value_);
    return *this;
}

Integer7& Integer7::operator+=(int v)
{
    this->value_ = (this->value_ + v);
    return *this;
}

Integer7& Integer7::operator++()
{
    value_++;
    return *this;
}

Integer7 Integer7::operator++(int)
{
    Integer7 temp = *this;
    ++*this;
    return temp;
}

Integer7& Integer7::operator*=(const Integer7 &i)
{
    this->value_ = (this->value_ * i.value_);
    return *this;
}

Integer7& Integer7::operator*=(int v)
{
    this->value_ = (this->value_ * v);
    return *this;
}

Integer7 operator+(int v, Integer7 j)
{
    return Integer7(v + j.get());
}

Integer7 operator+(Integer7 j, int v)
{
    return Integer7(j.get() + v);
}

Integer7 operator+(Integer7 j, const Integer7 & i)
{
    return Integer7(j.get() + i.get());
}

Integer7 operator*(int v, Integer7 j)
{
    return Integer7(v * j.get());
}

Integer7 operator*(Integer7 j, int v)
{
    return Integer7(j.get() * v);
}

Integer7 operator*(Integer7 j, const Integer7 & i)
{
    return Integer7(j.get() * i.get());
}

istream & operator >>(istream & is, Integer7 & i)
{
    return is >> i;
}

ostream& operator<<(ostream& os, const Integer7& i)
{
    return os << i.get() << endl;
}

// ... from the equality family
inline bool operator==(const Integer7& lhs, const Integer7& rhs)
{
    return (lhs.get() == rhs.get());
}

inline bool operator!=(const Integer7& lhs, const Integer7& rhs)
{
    return (lhs.get() != rhs.get());
}

// ... from the less-than family
inline bool operator< (const Integer7& lhs, const Integer7& rhs)
{
    return (lhs.get() < rhs.get());
}

inline bool operator> (const Integer7& lhs, const Integer7& rhs)
{
    return (lhs.get() > rhs.get());
}

inline bool operator<=(const Integer7& lhs, const Integer7& rhs)
{
    return (lhs.get() <= rhs.get());
}

inline bool operator>=(const Integer7& lhs, const Integer7& rhs)
{
    return (lhs.get() >= rhs.get());
}



int main(int argc, const char * argv[]) {
    // insert code here...
    Integer7 m(3), n(5);
    cout << m;
    cout << n << endl;
    
    m *= n;
    cout << m;
    cout << n << endl;
    
    n *= 3;
    cout << m;
    cout << n << endl;
    
    cout << m * n;
    cout << m;
    cout << n << endl;
    
    cout << m * 17 << endl;
    
    cout << 13 * n << endl;
}
