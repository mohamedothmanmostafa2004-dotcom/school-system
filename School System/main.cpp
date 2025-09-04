#include <iostream>
#include <Staff.h>
#include <Person.h>
#include <Student.h>
#include <School.h>
using namespace std;
int main()
{
    Student s("Mohammed",13,"male","Alex","012542215","mohammed@gmail.com",1,"two",3);
    Student s1("Mohammed",13,"male","Alex","012542215","mohammed@gmail.com",1,"two",3);
    Student s2("Mohammed",13,"male","Alex","012542215","mohammed@gmail.com",1,"two",3);
    Student s3("Mohammed",13,"male","Alex","012542215","mohammed@gmail.com",1,"two",3);
    Student s4("Mohammed",13,"male","Alex","012542215","mohammed@gmail.com",1,"two",3);
    Student s5("Mohammed",13,"male","Alex","012542215","mohammed@gmail.com",1,"two",3);
    School sch;
    sch.addStudent(s);
    sch.addStudent(s1);
    sch.addStudent(s2);
    sch.addStudent(s3);
    sch.addStudent(s4);
    sch.addStudent(s5);
    sch.printStudents();
    return 0;
}
