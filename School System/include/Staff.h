#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include <Person.h>
using namespace std;
class Staff:public Person
{
private:
    int staffID;
    string role;
    float salary;
public:
    void setStaffID(int staffID);
    void setRole(string role);
    void setSalary(float salary);
    int getStaffID();
    string getRole();
    float getSalary();
    Staff();
    Staff(string name,int age,string gender,string address,string phoneNumber
          ,string email,int staffID,string role,float salary);
          void print();
    ~Staff();

};

#endif // STAFF_H
