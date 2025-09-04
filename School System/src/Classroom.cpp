#include "Classroom.h"
#include <iostream>
using namespace std;
Classroom::Classroom(int num, int cap)
{
    roomNumber = num;
    capacity = cap;
}

void Classroom::display()
{
    cout << "\n--- Classroom ---" << endl;
    cout << "Room Number: " << roomNumber << endl;
    cout << "Capacity: " << capacity << endl;
}
