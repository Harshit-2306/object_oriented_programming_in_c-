#include <iostream>
using namespace std;

class Complex
{
private:
 int  real;
 int  imaginary;

public:

 Complex(double r = 0, double i = 0)
 {
  real = r;
  imaginary = i;
 }

 static Complex add(Complex c1, Complex c2)
 {
  Complex result;
  result.real = c1.real + c2.real;
  result.imaginary = c1.imaginary + c2.imaginary;
  return result;
 }

 void display()
 {
  if (imaginary >= 0)
  {
   cout << real << " + " << imaginary << "i" << endl;
  }
  else
  {
   cout << real << " - " << -imaginary << "i" << endl;
  }
 }
};

int main()
{
 Complex c1(3.0, 4.0);
 Complex c2(1.5, 2.5);


 cout << "First complex number: ";
 c1.display();
 cout << "Second complex number: ";
 c2.display();

 Complex sum = Complex::add(c1, c2);

 cout << "Sum of complex numbers: ";
 sum.display();

 return 0;
}
