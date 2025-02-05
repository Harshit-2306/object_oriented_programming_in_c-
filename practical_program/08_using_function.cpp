// WAP to chec wether the number entered by the user is palindrome or not using function
#include <iostream>
using namespace std;
int palindrome(int n)
{
 int temp = n;
 int rev = 0;
 while (n > 0)
 {
  int lastdigit = n % 10;
  rev = rev * 10 + lastdigit;
  n = n / 10;
 }
 if (rev == temp)
 {
  cout << "The number is palindrome" << endl;
 }
 else
 {
  cout << "This number is not palindrome" << endl;
 }
}
int main()
{
 int n;
 cout << "Enter the number ";
 cin >> n;
 palindrome(n);
 return 0;
}