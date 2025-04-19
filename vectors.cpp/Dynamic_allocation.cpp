using namespace std;
#include<iostream>
#include<vector>
int main()
{
 vector <int> arr;

 arr.push_back(4);
 arr.push_back(3);
 arr.push_back(0);
 arr.push_back(7);
 arr.push_back(6);

 cout<<"size of array = "<< arr.size()<<endl;
 cout<<"Capacity of arr = "<< arr.capacity()<<endl;

 return 0;
}