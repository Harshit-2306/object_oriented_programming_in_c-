// WAP to check the number is spy number or not using function
#include <iostream> 
using namespace std;
int sum(int n)
{
 int sum = 0, product = 1, rem;
 while (n > 0)
 {
  rem = n % 10;
  sum = sum + rem;
  product = product * rem;
  n = n / 10;
 }
 if (sum == product)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
int main()
{
 int n;
 cout << "Enter a number : ";
 cin >> n;
 if (sum(n) == 1)
 {
  cout << "The number is a spy number" << endl;
 }
 else
 {
  cout << "The number is not a spy number" << endl;
 }
 return 0;
}