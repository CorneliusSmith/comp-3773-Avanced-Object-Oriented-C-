//
//  A5Driver.cpp
//  a5
//
//  Created by Cornelius Smith on 2019-03-26.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#include <iostream>
#include "Student.h"
#include "Course.h"
#include "Registrar.h"

int main()
{
    // 1.  create a Registrar object
    Registrar * registrar = new Registrar();
    // 2.  create and add at least three courses to the Registrar
    Course * comp3723 = new Course("COMP 3723");
    Course * comp1103 = new Course("COMP 1103");
    Course * comp1213= new Course("COMP 1213");
    registrar->addCourse(comp3723);
    registrar->addCourse(comp1103);
    registrar->addCourse(comp1213);
    // 3.  create and add at least five students to the Registrar
    Student * luke = new Student("Luke");
    Student * jim = new Student("Jim");
    Student * zack = new Student("Zack");
    Student * duane = new Student("Duane");
    Student * meaghan = new Student("Meaghan");
    registrar->addStudent(luke);
    registrar->addStudent(jim);
    registrar->addStudent(zack);
    registrar->addStudent(duane);
    registrar->addStudent(meaghan);
    // 4.  enroll one student in three courses
    registrar->enroll(1000, "COMP 3723");
    registrar->enroll(1000, "COMP 1103");
    registrar->enroll(1000, "COMP 1213");
    // 5.  enroll one student in two courses
    registrar->enroll(1002, "COMP 3723");
    registrar->enroll(1002, "COMP 1103");
    // 6.  enroll three students in one course each
    registrar->enroll(1003, "COMP 1103");
    registrar->enroll(1004, "COMP 3723");
    registrar->enroll(1001, "COMP 1213");
    // 7.  for each student a.print their name and number and the list of courses
    // they're enrolled in
    luke->printInfo();
    luke->printCourses();
    cout << endl;
    zack->printInfo();
    zack->printCourses();
    cout << endl;
    duane->printInfo();
    duane->printCourses();
    cout << endl;
    meaghan->printInfo();
    meaghan->printCourses();
    cout << endl;
    jim->printInfo();
    jim->printCourses();
    cout << endl;
    // 8.  for each course a.print its code and the list of students enrolled
    // in it
    comp3723->printCode();
    comp3723->printCourseList();
    cout << endl;
    comp1103->printCode();
    comp1103->printCourseList();
    cout << endl;
    comp1213->printCode();
    comp1213->printCourseList();
    cout << endl;
    // 9.  drop (any) one student from (any) one course
    registrar->drop(1000, "COMP 3773");
    // 10. print the name and number of that student and the list of courses
    // they're enrolled in
    luke->printInfo();
    luke->printCourses();
    cout << endl;
    //  11. print the code and list of students for the course that student
    //  dropped Use STL lists and algorithms(find, find_if, etc.) as
    //    appropriate.Use pointers to Courses and Students in the lists, and
    //    as method arguments and return types.  (We don't want to create copies
    //  of these objects.)
    comp3723->printCode();
    comp3723->printCourseList();
    
}
