#include<iostream>
#include<string.h>
using namespace std;
class student
{
 int roll_no;
 char name[50];
 float marks;
 public:
 void getdata(int r,char n[],float m);
 void putdata();
};

void student::getdata(int r,char n[],float m)
{
 roll_no = r;
 strcpy(name,n);
 marks = m;
}

void student::putdata()
{
 cout<<name<<"\t"<<roll_no<<"\t"<<marks;
}

int main()
{
 student s;
 s.getdata(21,"Arya",90.0);
 s.putdata();
 return 0;
}
