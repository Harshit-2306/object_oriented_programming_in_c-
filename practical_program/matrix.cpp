// WAP to add two matrix using 2d array
#include <iostream>
using namespace std;
int main()
{
 int n, m;
 cout << "Enter the number of rows and columns ";
 cin >> n >> m;
 int arr[n][m];
 int brr[n][m];
 cout << "Enter the elements of first matrix ";
 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < m; j++)
  {
   cin >> arr[i][j];
  }
 }
 cout << "Enter the elements of second matrix ";
 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < m; j++)
  {
   cin >> brr[i][j];
  }
 }
 int sum[n][m];
 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < m; j++)
  {
   sum[i][j] = arr[i][j] + brr[i][j];
  }
 }
 cout << "The sum of the two matrix is " << endl;
 for (int i=0;i<n;i++)
 {
  for (int j=0;j<m;j++)
  {
   cout<<sum[i][j];
  }
  cout<<\t<<endl;
 }
 return 0;
}