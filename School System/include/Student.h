#ifndef STUDENT_H
#define STUDENT_H
#include<Person.h>

class Student:public Person
{
private:
    int studentID;
    string gradeLevel;
    float GPA;
public:
    Student();
    ~Student();
    Student(int studentID,string gradeLevel,float GPA);
    Student(string name,int age,string gender,string address,
            string phoneNumber,string email,int studentID,string gradeLevel,float GPA);
    void setStudentId(int studentID);
    void setGradeLevel(string gradeLevel);
    void setGPA(float GPA);
    int getStudentID();
    string getGradeLevel();
    float getGPA();
    void print();
};



#endif // STUDENT_H
