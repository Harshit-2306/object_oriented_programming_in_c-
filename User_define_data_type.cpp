#include<iostream>
using namespace std;
class Student { // Student is a new data type
 public:
  string name;
  int roll_no;
  float gpa;
};

int main()
{
 Student s1;
 s1.name = "Harshit Tiwari";
 s1.roll_no = 28;
 s1.gpa = 9.2;

 Student s2;
 s2.name = "Harshitt Tiwari";
 s2.roll_no = 30;
 s2.gpa = 9.0;

 cout<<s1.name<<" "<<s1.gpa<< " "<<s1.roll_no<<endl;
 cout<<s2.name<<" "<<s2.gpa<< " "<<s2.roll_no<<endl;
}