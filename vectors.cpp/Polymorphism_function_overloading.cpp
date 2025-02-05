#include<iostream>
using namespace std;
class loading
{
 public:
void sum(string a, string b)
{
 cout<<a+b<<endl;
}
void sum(int a,int  b)
{
 cout<<a+b<<endl;
}
};
int main()
{
 loading a;
 a.sum("Harshit ","Tiwari");
 a.sum(10,20);
}