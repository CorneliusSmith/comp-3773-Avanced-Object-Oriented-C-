//
//  student.cpp
//  a5
//
//  Created by Cornelius Smith on 2019-03-26.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#include <iostream>
#include "Student.h"

int Student::s_number;

//constructor for student
Student::Student(const string& n)
{
    name = n;
    number = 1000 + s_number;
    s_number++;
}

//prints student name and number
void Student::printInfo()
{
    cout << this->name << " (#" << this->number << ")" << endl;
}

//prints courses a student is enrolled in
void Student::printCourses()
{
    vector<Course *>::iterator itr;
    for (itr = courselist.begin(); itr != courselist.end(); itr++)
    {
        (*itr)->printCode();
    }
}

//add course to student and checks if student is added in course
void Student::addCourse(Course *course)
{
   vector <Course*>::iterator itr;
    for (itr = courselist.begin(); itr != courselist.end(); itr++)
    {
        if ((*itr)->code == course->code)
        {
            cout << name << " is already registered in " << course->code << "." << endl;
            return;
        }
    }
    courselist.push_back(course);
}

//removes course from student
void Student::removeCourse(Course * course)
{
    vector<Course *>::iterator itr = find(courselist.begin(), courselist.end(), course);
    if (itr != courselist.end())
    {
        courselist.erase(itr);
    }
}
