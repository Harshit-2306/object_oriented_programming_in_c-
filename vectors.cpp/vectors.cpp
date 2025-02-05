#include <iostream>
using namespace std;
class Vector
{
public:
 int size;
 int capacity;
 int *arr;

 Vector()
 {
  size = 0;
  capacity = 1;
  arr = new int[1];
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
   arr = arr2;
  }
  arr[size] = ele;
 }

 int get(int idx)
 {
  if(size == 0)
  {
   cout<<"Array is empty"<<" ";
   return -1;
  }
  if(idx >=size || idx<0)
  {
   cout<<"Invalid Array"<<" ";
   return -1;
  }
  return arr[idx];
 }
 
};