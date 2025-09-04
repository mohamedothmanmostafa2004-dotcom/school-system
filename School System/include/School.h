#ifndef SCHOOL_H
#define SCHOOL_H
#include <iostream>
#include <Teacher.h>
#include <Student.h>
#include <Staff.h>
#include <Course.h>
using namespace std;
class School
{
private:
    int studentCounter;
    string schoolName;
    string address;
    string principalName;
    Student *students;
    Teacher teachers[20];
    Staff staffMembers[10];
    Course courses[6];
    //Classroom classrooms[10];
public:
    void addStudent(Student student);
    void print();
    void printStudents();
    School(string schoolName,string address,string principalName);
    virtual ~School();
    School(int Students);
    School();


};

#endif // SCHOOL_H
