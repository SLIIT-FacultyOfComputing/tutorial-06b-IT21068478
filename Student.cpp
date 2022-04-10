#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails( int sid, char name[20]) {
  studentId = sid;
  strcpy (sname,name);
  
}

// Display StudentId and Name
void Student::display() {
  cout << studentId << sname << endl;
  
}
