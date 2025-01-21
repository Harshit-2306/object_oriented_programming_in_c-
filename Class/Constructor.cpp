#include<iostream>
using namespace std;
class Student { // Student is a new data type
 public:
  string name;
  int roll_no;
  float gpa;

  Student(string s,int r, float g){
   name = s;
   roll_no = r;
   gpa = g;
  }
};

int main()
{
 Student s1("Harshit Tiwari",28,9.0);
 // s1.name = "Harshit Tiwari";
 // s1.roll_no = 28;
 // s1.gpa = 9.2;

 cout<<s1.name<<" "<<s1.gpa<< " "<<s1.roll_no<<endl;
}

