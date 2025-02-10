// WAP to print reverse number using user define function
#include <iostream>
using namespace std;
int reverse(int n)
{
 int rev = 0;
 while (n != 0)
 {
  rev = rev * 10 + n % 10;
  n = n / 10;
 }
 return rev;
 
}
int main()
{
 int num;
 cout << "Enter the number: ";
 cin >> num;
 cout << "Reverse of the number is: " << reverse(num) << endl;
 return 0;
}