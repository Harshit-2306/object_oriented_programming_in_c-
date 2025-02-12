// WAP To find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.
// Input Format
// A single line of five space-separated integers.


#include <iostream>
using namespace std;
int main()
{
 int a[5];
 for (int i = 0; i < 5; i++)
 {
  cin >> a[i];
 }
 int min = a[0], max = a[0];
 long sum = 0;
 for (int i = 0; i < 5; i++)
 {
  sum += a[i];
  if (a[i] < min)
  {
   min = a[i];
  }
  if (a[i] > max)
  {
   max = a[i];
  }
 }
 cout << sum - max << " " << sum - min << endl;
 return 0;
}

