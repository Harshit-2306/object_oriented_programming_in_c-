// WAP to search weather the element is present in an array or not
#include <iostream>
using namespace std;
int main()
{
 int m;
 cout<<"Enter the size of the array ";
 cin >> m;
 int brr[m];
 for (int i = 0; i < m; i++)
 {
  cin >> brr[i];
 }
 int x;
 cin >> x;
 for (int i = 0; i < m; i++)
 {
  if (brr[i] == x)
  {
   cout << "element is present in index " << i << endl;
   break;
  }
  else
  {
   cout << "element is not present in the array" << endl;
   break;
  }
 }
 return 0;
}