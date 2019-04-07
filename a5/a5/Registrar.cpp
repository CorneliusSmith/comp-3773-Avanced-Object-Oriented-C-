//
//  Registrar.cpp
//  a5
//
//  Created by Cornelius Smith on 2019-03-26.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#include "Registrar.h"
#include <iostream>

//Constructor for registrar
Registrar::Registrar()
{
    return;
}

//destructor for registrar
Registrar::~Registrar()
{
    students.clear();
    courses.clear();
}

//add a newly created course (using a pointer to a Course object)
void Registrar::addCourse(Course *course)
{
    courses.push_back(course);
}

//add a newly created student (using a pointer to a Student object)
void Registrar::addStudent(Student *student)
{
    students.push_back(student);
}

//enroll a student in a course (given student number and code)
void Registrar::enroll(int student_num, string code)
{
    Student * student = findStudent(student_num);
    Course * course = findCourse(code);
    
    if (course != NULL && student != NULL)
    {
        course->addStudent(student);
        student->addCourse(course);
    }
}

//drop a student from a course (given student number and code)
void Registrar::drop(int student_num, string code)
{
    Student * student = findStudent(student_num);
    Course * course = findCourse(code);
    
    if (course != NULL && student != NULL)
    {
        course->removeStudent(student);
        student->removeCourse(course);
    }
}

//find a course by code
Course * Registrar::findCourse(string code)
{
    vector <Course *>::iterator itr;
    for (itr= courses.begin(); itr != courses.end(); itr++)
    {
        if ((*itr)->code == code)
        {
            
            return *itr;
        }
    }
    return NULL;
}

//find a student by student number
Student * Registrar::findStudent(int student_num)
{
     vector <Student *>::iterator itr ;
     for (itr= students.begin(); itr != students.end(); itr++)
     {
         if ((*itr)->s_number == student_num)
         {
             return *itr;
         }
     }
     return NULL;
}

