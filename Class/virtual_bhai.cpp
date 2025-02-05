#include <iostream>
using namespace std;
class scooty // parent class
{
public:
 string name;
 int price;
 float mileage;

 virtual void sound()
 {
  cout << "vroom vroom" << endl;
 }

private:
 int bootspace;
};
class Bike : public scooty // child class
{
public:
 int gears;

 void print(Bike b)
 {
  cout << b.name << " " << b.price << " " << b.mileage << " " << b.gears << endl;
 }
 void sound()
 {
  cout << "Dhoom Dhoom" << endl;
 }
};
int main()
{
 scooty* s = new Bike();
 s->sound();
 Bike* b = new scooty();
 b->sound();
}