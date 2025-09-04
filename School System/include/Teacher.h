#ifndef TEACHER_H
#define TEACHER_H
#include<Person.h>

class Teacher:public Person
{
private:
    int teacherID;
    string subjectSpecialization;
    float salary;
public:
    void setTeacherID(int teacherID);
    void setSubjectSpecialization(string subjectSpecialization);
    void setSalary(float salary);
    int getTeacherID();
    string getSubjectSpecialization();
    float getSalary();
    Teacher(string name,int age,string gender,string address,string phoneNumber,string email,
             int teacherID,string subjectSpecialization,float salary);
             void print();
    Teacher();
    ~Teacher();



};

#endif // TEACHER_H
