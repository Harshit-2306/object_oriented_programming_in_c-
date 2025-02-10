#include <iostream>
using namespace std;
int main()
{
 int n;
 float sum =0.0,a,i;
 cout<<"Enter a number : ";
 cin >> n;
 for (i = 1.0; i < n; i++)
 {
  a = 1 / i;
  sum += a;
 }
 cout <<sum;
 return 0;
}