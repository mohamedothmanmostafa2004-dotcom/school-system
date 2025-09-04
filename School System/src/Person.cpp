#include "Person.h"

Person::Person()
{

}
Person::~Person()
{

}
Person::Person(string name,int age,string gender,string address,string phoneNumber,string email)//parametrize Constructor
{

    this->name=name;
    this->age=age;
    this->gender=gender;
    this->address=address;
    this->phoneNumber=phoneNumber;
    this->email=email;
}
void Person::print()
{
    cout<<"The Name Is "<<name<<endl;
    cout<<"The Age Is "<<age<<endl;
    cout<<"The Gender Is "<<gender<<endl;
    cout<<"The Address Is "<<address<<endl;
    cout<<"The Phone Number Is "<<phoneNumber<<endl;
    cout<<"The Email Is "<<email<<endl;
}
void Person::setName(string name)
{
    this->name=name;
}
void Person::setAge(int age)
{
    this->age=age;
}
void Person::setGender(string gender)
{
    this->gender=gender;
}
void Person::setAddress(string address)
{
    this->address=address;
}
void Person::setPhoneNumber(string phoneNumber)
{
    this->phoneNumber=phoneNumber;
}
void Person::setEmail(string email)
{
    this->email=email;
}
string Person::getName()
{
    return name;
}
int Person::getAge()
{
    return age;
}
string Person::getGender()
{
  return gender;
}
string Person::getAddress()
{
  return address;
}
string Person::getPhoneNumber()
{
  return phoneNumber;
}
string Person::getEmail()
{
  return email;
}
