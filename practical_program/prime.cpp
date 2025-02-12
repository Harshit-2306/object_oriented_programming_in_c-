// wap to print the given number is prime or not using function
#include <iostream>
using namespace std;
int prime(int n)
{
 int i;
 for (i = 2; i < n; i++)
 {
  if (n % i == 0)
  {
   cout << "The number is not prime" << endl;
  }
 }
 cout << "The number is prime" << endl;
 return 1;
}
int main()
{
 int n;
 cout << "Enter a number : ";
 cin >> n;
 prime(n);
 return 0;
}
