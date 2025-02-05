#include <iostream>
#include <math.h>
using namespace std;
int main()
{
 int binary_number, remainder, i = 0, decimal = 0;
 cout << "Enter a Binary Number : ";
 cin >> binary_number;
 while (binary_number != 0)
 {
  remainder = binary_number % 10;
  decimal += remainder * pow(2, i);
  binary_number = binary_number / 10;
  i++;
 }
 cout << "Binary number : " << decimal << " ";
 return 0;
}