#include <iostream>
using namespace std;

class Box
{
private:
 double length;
 double breadth;
 double height;

public:
 void set(double l, double b, double h)
 {
  length = l;
  breadth = b;
  height = h;
 }

 double calculate()
 {
  return length * breadth * height;
 }
};

int main()
{
 Box box1, box2;

 box1.set(3, 4, 5);
 box2.set(6, 7, 8);

 cout << box1.calculate() << endl;
 cout << box2.calculate() << endl;

 return 0;
}
