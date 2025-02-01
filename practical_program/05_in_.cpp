 //wap to input any integer number from user than print factorial value usinf function
#include<iostream>
using namespace std;
int fact (int n)
{
int fact = 1;
for(int i =1;i<=n;i++)
{
 fact*=i;
}
return fact;
}
int main()
{
 int n;
 cout<<"Enter a number : ";
 cin>>n;
 cout<<"factorial value :"<<fact(n)<<endl;
 return 0;
}