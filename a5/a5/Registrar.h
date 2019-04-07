//
//  Registrar.h
//  a5
//
//  Created by Cornelius Smith on 2019-03-26.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#include <string>
#include <vector>
#include "Student.h"
#include "Course.h"

#ifndef Registrar_h
#define Registrar_h

class Registrar
{
public:
    Registrar();
    ~Registrar();
    void addCourse(Course* course);
    void addStudent(Student* student);
    void drop(int student_num, string code);
    void enroll(int student_num, string code);
    Course * findCourse(string code);
    Student * findStudent(int student_num);
private:
    vector<Student *> students;
    vector<Course *> courses;
};

#endif /* Registrar_h */
