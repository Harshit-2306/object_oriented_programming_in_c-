#include <iostream>
using namespace std;
class Vector
{
public:
 int *arr;
 int size;
 int capacity;

Vector()
 {
  size = 0;
  capacity = 1;
  arr = new int[1];
 }

 ~Vector()
 {
  delete[] arr;
 }

 void add(int ele)
 {
  if (size == capacity)
  {
   capacity *= 2;
   int *arr2 = new int[capacity];
   for (int i = 0; i < size; i++)
   {
    arr2[i] = arr[i];
   }
   delete[] arr;
   arr = arr2;
  }
  arr[size++] = ele;
 }

 void print()
 {
  for (int i = 0; i < size; i++)
  {
   cout << arr[i] << " ";
  }
  cout << endl;
 }

 int get(int idx)
 {
  if (size == 0)
  {
   cout << "Array is empty" << endl;
   return -1;
  }
  if (idx >= size || idx < 0)
  {
   cout << "Invalid index" << endl;
   return -1;
  }
  return arr[idx];
 }

 void remove()
 {
  if (size == 0)
  {
   cout << "Array is empty" << endl;
  }
  size--;
 }
};

int main()
{
 Vector v;

 // cout << v.size << " " << v.capacity << endl;

 v.add(10);
 v.print();

 // cout << v.size << " " << v.capacity << endl;

 v.add(20);
 v.print();

 // cout << v.size << " " << v.capacity << endl;

 v.add(5);
 v.print();

 // cout << v.size << " " << v.capacity << endl;

 v.add(90);
 v.print();

 v.remove();
 // cout << v.size << " " << v.capacity << endl;
 v.print();

 // cout << v.size << " " << v.capacity << endl;
 // cout << "element at index : " << v.get(5) << endl;
}