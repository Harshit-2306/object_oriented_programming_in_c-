using namespace std;
#include <iostream>

void swap(int *a, int *b)
{
 int temp = *a;
 *a = *b;
 *b = temp;
}

void decending(int arr[], int start, int end)
{
 for (int i = start; i <= end; i++)
 {
  for (int j = i + 1; j <= end; j++)
  {
   if (arr[i] > arr[j])
   {
    swap(&arr[i], &arr[j]);
   }
  }
 }
}


void assending(int arr[], int start, int end)
{
 for (int i = start; i < end; i++)
 {
  for (int j = i + 1; j < end; j++)
  {
   if (arr[i] < arr[j])
   {
    swap(&arr[i], &arr[j]);
   }
  }
 }
}
void print(int arr[],int n)
{
 cout<<"sorted array : ";
 for (int i=0;i<n;i++)
 {
  cout<<"  "<<arr[i];
 }
}

int main()
{
 int n;
 cout << "Enter a size of array : ";
 cin >> n;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
  cout << "arr[" << i << "]: ";
  cin >> arr[i];
 }

 int mid = n / 2;
 assending(arr, 0, mid);
 decending(arr, mid, n);

 print(arr , n);
 return 0;
}