#include <iostream>
using namespace std;
int main()
{
 int num1, num2, temp;
 int dividend, divisor, remainder;
 cout << "\n Enter the two numbers : ";
 cin >> num1 >> num2;
 if (num1 > num2)
 {
  dividend = num1;
  divisor = num2;
 }
 else
 {
  dividend = num2;
  divisor = num1;
 }
 while (divisor)
 {
  remainder = dividend % divisor;
  dividend = divisor;
  divisor = remainder;
 }
 cout << dividend;
 return 0;
}
