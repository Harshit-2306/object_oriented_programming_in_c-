// write a program to in put any integer value from user than armstrong number or not
#include <iostream>
using namespace std;
int main()
{
 int n;
 cout << "Enter a number:";
 cin >> n;
 int sum = 0;
 int temp = n;
 while (n > 0)
 {
  int rem = n % 10;
  sum += rem * rem * rem;
  n /= 10;
 }
 if (temp == sum)
  cout << "armstrong number" << endl;
 else
  cout << "not armstrong number" << endl;
 return 0;
}