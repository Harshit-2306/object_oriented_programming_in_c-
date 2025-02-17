#include <iostream>
using namespace std;
int main()
{
 int n,i,index=0;
 cout << "Enter an size of 1array : ";
 cin >> n;
 int arr[n];
 cout << "Enter a element in 1array : ";
 for (i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 int m;
 cout << "Enter an size of 2array : ";
 cin >> m;
 int brr[m];
 cout << "Enter a element in 2array : ";
 for (i = 0; i < m; i++)
 {
  cin >> brr[i];
 }
 int a = m + n;
 int ar[index];
 for (i = 0; i < n; i++)
 {
  ar[index] = arr[i];
  index++;
 }
 for (i = 0; i < m; i++)
 {
  ar[index] = brr[i];
  index++;
 }
 cout << "Merged array : ";
 cout << "\n$***********************$\n";
 for (i = 0; i < a; i++)
 {
  cout <<" "<<ar[i];
 }
  cout << "\nReverse array : ";
 cout << "\n$***********************$\n";
 for(i=a-1;i>=0;i--)
 {
  cout <<" "<<ar[i];
 }
}