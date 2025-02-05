#include <iostream>
using namespace std;

class fraction
{
public:
 int num;
 int den;

 // Constructor
 fraction(int num, int den)
 {
  this->num = num;
  this->den = den;
 }

 // Display Function
 void display()
 {
  cout << num << " / " << den << endl;
 }

 // Addition Function
 // fraction  add(fraction f1)

 fraction operator+(fraction f1)
 {
  int new_num = (num * f1.den) + (f1.num * den);
  int new_den = den * f1.den;
  return fraction(new_num, new_den);
 }
};

int main()
{
 fraction f1(1, 9);
 fraction f2(2, 7);

 f1.display();
 f2.display();

 fraction f3 = f2 + f1;
 // fraction f3 = f2.add(f1);
 f3.display(); // Display the sum of the fractions

 return 0;
}
