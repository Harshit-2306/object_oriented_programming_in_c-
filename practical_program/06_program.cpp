#include <iostream>
using namespace std;
int main()
{
 int amt, coustomer_type;
 const int C = 1, R = 2, N = 3;
 cin >> amt;
 if (amt > 2000)
 {
  cin >> coustomer_type;
  cout << "You are eligible for discount" << endl;
  if (coustomer_type == C && coustomer_type == R)
  {
   amt = amt - (amt * 0.05);
   cout << "You are a regular coustomer " << endl;
  }
  else if (coustomer_type == C && coustomer_type == N)
  {
   amt = amt - (amt * 0.02);
   cout << "You are a new coustomer" << endl;
  }
  else
  {
   cout << "You are not a regular coustomer";
  }
 }
 else
 {
  cout << "You are not eligible for discount";
 }
 return 0;
}
