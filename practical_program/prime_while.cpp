using namespace std;
#include <iostream>
int main()
{
 int n;
 cout << "Enter a number : ";
 cin >> n;
 int i = 2;
 while (i < n)
 {
  if (n % i == 0)
  {
   cout << "The number is not prime" << endl;
   exit;
  }
  else
  {
   i++;
  }
 }
 cout << "The number is prime" << endl;
 return 0;
}