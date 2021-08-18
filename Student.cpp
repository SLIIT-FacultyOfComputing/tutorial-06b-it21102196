#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int Id,char N[]) {
  StudentId = Id;
  strcpy(name, N);
  
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student ID : "<<StudentId<<endl;
  cout<<"Student Name :"<< name<<endl;
}
