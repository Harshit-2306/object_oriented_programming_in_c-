#include<iostream>
using namespace std;
class Student { // Student is a new data type
 public:
  string name;
  int roll_no;
  float gpa;
  
  Student(){//Default constructor

  };

  Student(string s,int r, float g)//parameterized concstructor
  {
  name = s;
  roll_no = r;
  gpa = g;
  }
};

int main()
{
 Student s1("Harshit tiwari",28,9.0);;
 // s1.name = "Harshit Tiwari";
 // s1.roll_no = 28;
 // s1.gpa = 9.2;

 Student s2;
 s2.name = "Harshitt Tiwari";
 s2.roll_no = 30;
 s2.gpa = 9.0;

 cout<<s1.name<<" "<<s1.gpa<< " "<<s1.roll_no<<endl;
 cout<<s2.name<<" "<<s2.gpa<< " "<<s2.roll_no<<endl;
}