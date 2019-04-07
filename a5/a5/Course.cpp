//
//  Course.cpp
//  a5
//
//  Created by Cornelius Smith on 2019-03-26.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#include "Course.h"
#include "Student.h"
#include <iostream>
#include <algorithm>
// Constructor for course object
Course::Course(const string & code_)
{
    code = code_;
}

// Prints out code for the course
void Course::printCode()
{
    cout << code << endl;
}

//print a list of the Students enrolled in this Course
void Course::printCourseList()
{
    vector<Student *>::iterator it;
    
    for(auto it = studentlist.begin(); it != studentlist.end()
        ; it++)
    {
        cout << (* it)->name;
    }
   // cout << endl;
}

//allow its friend the Registrar to add a Student from the list of students enrolled
void Course::addStudent(Student * student)
{

    studentlist.push_back(student);
    cout<<"k";
}

//allow its friend the Registrar to delete a Student from the list of students enrolled
void Course::removeStudent(Student * student)
{
    vector <Student *>::iterator itr = find(studentlist.begin(), studentlist.end(), student);
    if(itr != studentlist.end())
    {
        studentlist.erase(itr);
    }
}


