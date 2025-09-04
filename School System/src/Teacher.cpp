#include "Teacher.h"

Teacher::Teacher()
{
    //ctor
}

Teacher::~Teacher()
{

}
void Teacher::setTeacherID(int teacherID)
{
    this->teacherID=teacherID;
}
void Teacher::setSubjectSpecialization(string subjectSpecialization)
{
    this->subjectSpecialization=subjectSpecialization;
}
void Teacher::setSalary(float salary)
{
    this->salary=salary;
}
int Teacher::getTeacherID()
{
    return teacherID;
}
string Teacher::getSubjectSpecialization()
{
    return subjectSpecialization;
}
float Teacher::getSalary()
{
    return salary;
}
Teacher::Teacher(string name,int age,string gender,string address,string phoneNumber,string email,
                 int teacherID,string subjectSpecialization,float salary)
    :Person(name,age,gender,address,phoneNumber,email)
{
    this->teacherID=teacherID;
    this->subjectSpecialization=subjectSpecialization;
    this->salary=salary;
}
void Teacher::print()
{
    Person::print();
    cout<<"The Teacher ID IS : "<<teacherID<<endl;
    cout<<"The Subject Specialization IS : "<<subjectSpecialization<<endl;
    cout<<"The Salary IS : "<<salary<<endl;
}
