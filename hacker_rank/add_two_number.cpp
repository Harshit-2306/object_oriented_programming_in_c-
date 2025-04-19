#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> addTwoNumbers(const vector<int> &l1, const vector<int> &l2)
{
 vector<int> result;
 int carry = 0;
 int i = 0, j = 0;
 int n = l1.size(), m = l2.size();

 while (i < n || j < m || carry > 0)
 {
  int digit1 = 0;
  if (i < n)
  {
   digit1 = l1[i];
  }

  int digit2 = 0;
  if (j < m)
  {
   digit2 = l2[j];
  }

  int sum = digit1 + digit2 + carry;
  carry = sum / 10;
  result.push_back(sum % 10);

  if (i < n)
   i++;
  if (j < m)
   j++;
 }

 return result;
}

int main()
{
 vector<int> l1 = {2, 4, 3};
 vector<int> l2 = {5, 6, 4};
 vector<int> result = addTwoNumbers(l1, l2);

 for (int num : result)
 {
  cout<< num << " ";
 }
}
