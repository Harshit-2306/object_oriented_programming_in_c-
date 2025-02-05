#include<iostream>
using namespace std;
class fraction
{
 public: 
 int num; 
 int den;

 fraction(int num,int den)
 {
  this->num = num;
  this->den = den;
 }

 void display()
 {
  cout<<num<<" / "<<den<<endl;
 }

void add()
{
 (f1.num*f2.den+f2.num*f1.den)/(f1.den*f2.den);
}
};
int main()
{
 fraction f1(1,9);
 fraction f2(2,7);
 f1.display();
 f2.display();
 cout<<f1.add(f2)<<endl;
}