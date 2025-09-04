#include "Staff.h"

Staff::Staff()

{

}
Staff::Staff(string name,int age,string gender,string address,string phoneNumber
             ,string email,int staffID,string role,float salary)
:Person(name,age,gender,address,phoneNumber,email)
{

    this->staffID=staffID;
    this->role=role;
    this->salary=salary;
}
Staff::~Staff()
{

}
void Staff::setStaffID(int staffID)
{
    this->staffID=staffID;
}
void Staff::setRole(string role)
{
    this->role=role;
}
void Staff::setSalary(float salary)
{
    this->salary=salary;
}
int Staff::getStaffID()
{
    return staffID;
}
string Staff::getRole()
{
    return role;
}
float Staff::getSalary()
{
    return salary;
}
void Staff::print()
{
  Person::print();
 cout<<"The Staff ID Is "<<staffID<<endl;
 cout<<"The Role Is "<<role<<endl;
 cout<<"The Salary Is "<<salary<<endl;
}
