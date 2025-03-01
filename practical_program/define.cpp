#include<iostream>
#include<string.h>
using namespace std;

class student
{
 char name[40];
 char grade;
 float marks;
 public:
 void getdata();
 void display_data();
};

inline void student::getdata()
{
 cout<<"Enter name ";
 cin>>name;
 cout<<"Enter grade ";
 cin>>grade;
 cout<<"Enter marks ";
 cin>>marks;
}

inline void student::display_data()
{
 cout<<name<<"\t"<<grade<<"\t"<<marks;
}

int main()
{
 student s;
 s.getdata();
 s.display_data();
 return 0;
}