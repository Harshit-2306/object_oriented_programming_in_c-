using namespace std;
#include <iostream>
#include <stdlib.h>
class fraction
{
private:
 int num;
 int deno;
 void simplify();
 int GCD(int a, int b);

public:
 void get_data()
 {
  cout << "Enter the numerator: ";
  cin >> num;
  cout << "Enter the denominator: ";
  cin >> deno;
  if (deno == 0)
  {
   cout << "Invalid input" << endl;
   exit(1);
  }
 }
 void display()
 {
  simplify();
  cout << num << "/" << deno << endl;
 }
void fraction::simplify()
{
 cout<<"Simplifying the fraction: ";
 int gcd = GCD(num, deno);
 num = num / gcd;
 deno = deno / gcd; 
}
};
int fraction::GCD(int a, int b)
{
 if (b == 0)
  return a;
 else
 return GCD(b, a % b);
}
int main()
{
 fraction f;
 f.get_data();
 f.display();
 return 0;
}