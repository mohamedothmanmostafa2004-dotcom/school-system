#include "Student.h"

Student::Student()
{
    //ctor
}

Student::~Student()
{
    //dtor
}
Student::Student(int studentID,string gradeLevel,float GPA)
{
    this->studentID=studentID;
    this->gradeLevel=gradeLevel;
    this->GPA=GPA;
}
Student::Student(string name,int age,string gender,string address,
                 string phoneNumber,string email,int studentID,string gradeLevel,float GPA)
    :Person(name,age,gender,address,phoneNumber,email)
{

    this->studentID=studentID;
    this->gradeLevel=gradeLevel;
    this->GPA=GPA;
}
void Student::setStudentId(int studentID)
{
    this->studentID=studentID;
}
void Student::setGradeLevel(string gradeLevel)
{
    this->gradeLevel=gradeLevel;
}
void Student::setGPA(float GPA)
{
    this->GPA=GPA;
}
int Student::getStudentID()
{
    return studentID;
}
string Student::getGradeLevel()
{
    return gradeLevel;
}
float Student::getGPA()
{
    return GPA;
}
void Student::print()
{
    Person::print();
    cout<<"The Student ID is : "<<studentID<<endl;
    cout<<"The Grade Level is : "<<gradeLevel<<endl;
    cout<<"The GPA is : "<<GPA<<endl;
}
