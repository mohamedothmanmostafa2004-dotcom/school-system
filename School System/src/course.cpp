#include "Course.h"

Course::Course()
{
    //ctor
}

Course::~Course()
{
    //dtor
}
void Course::setCourseCode(string courseCode)
{
    this->courseCode=courseCode;
}
void Course::setCourseName(string courseName)
{
    this->courseName=courseName;
}
void Course::setTeacherName(string teacherName)
{
    this->teacherName=teacherName;
}
string Course::getCourseCode()
{
    return courseCode;
}
string Course::getCourseName()
{
    return courseName;
}
string Course::getTeacherName()
{
    return teacherName;
}
void Course::print()
{
    cout<<"The Course Code IS : "<<courseCode<<endl;
    cout<<"The Course Name IS : "<<courseName<<endl;
    cout<<"The Teacher Name IS : "<<teacherName<<endl;
}
Course::Course(string courseCode,string courseName,string teacherName)
{
    this->courseCode=courseCode;
    this->courseName=courseName;
    this->teacherName=teacherName;
}
