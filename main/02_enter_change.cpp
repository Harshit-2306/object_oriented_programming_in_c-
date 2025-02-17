#include <iostream>
using namespace std;
int main()
{
 int n, r, v;
 cout << "Enter the size of array : ";
 cin >> n;
 int a[n];
 for (int i = 0; i < n; i++)
 {
  cout << "enter an element of index " << "[" << i << "]" << " ";
  cin >> a[i];
 }
 r = a[0];
 for (int i = 1; i < n; i++)
 {
  if (a[i] < r)
  {
   cout << a[i] << " ";
  }
 }
 v = a[n - 1];
 for (int i = 1; i < n; i++)
 {
  if (a[i] > v)
  {
   cout << a[i] << " ";
  }
 }
}