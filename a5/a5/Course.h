//
//  course.h
//  a5
//
//  Created by Cornelius Smith on 2019-03-26.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#ifndef COURSE_H
#define COURSE_H


#include <string>
#include <vector>

using namespace std;

class Student;

class Course
{
public:
    Course(const string&);
    ~Course();
    void printCode();
    void printCourseList();
    string code;
private:
    vector <Student *> studentlist;
    friend class Registrar;
    void addStudent(Student *);
    void removeStudent(Student *);
};
#endif /* course_h */
