//WAP TO print the factors of the given numner
#include<iostream>
using namespace std;
int factors(int n)
{
 cout<<"factors of number "<<n<<" are : ";
 for(int i=1;i<=n;i++)
 {
  if(n%i==0)
  {
   cout<<i<<" ";
  }
 }
 return 1;
}
int main()
{
 int n;
 cout<<"Enter a number : ";
 cin>>n;
 factors(n);
}