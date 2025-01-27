// wap to input any integer number from user than print the sum of factorial value
#include <iostream>
using namespace std;
int main()
{
 int n;
 cout << "Enter a number :";
 cin >> n;
 int sum = 0;
 for (int i = 1; i <= n; i++)
 {
  int fact = 1;
  for (int j = 1; j <= i; j++)
  {
   fact *= j;
  }
  sum += fact;
 }
 cout << "sum of factorial value :" << sum << endl;
 return 0;
}