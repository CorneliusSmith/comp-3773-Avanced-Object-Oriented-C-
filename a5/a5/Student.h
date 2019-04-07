//
//  student.h
//  a5
//
//  Created by Cornelius Smith on 2019-03-26.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//
#include <iostream>
#include <string>
#include <vector>
#include "Course.h"
#ifndef STUDENT_H
#define STUDENT_H
using namespace std;

class Student
{
public:
    Student(const string&);
    ~Student();
    void printInfo();
    void printCourses();
    string name;
    static int s_number;
    int number;
private:
    vector <Course *> courselist;
    friend class Registrar;
    void addCourse(Course * course);
    void removeCourse(Course * course);
};
#endif /* student_h */
