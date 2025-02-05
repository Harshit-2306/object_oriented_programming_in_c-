#include <iostream>
using namespace std;
class scooty  //parent class
{
public:
 string name;
 int price;
 float mileage;

private:
 int bootspace;
};
class Bike : public scooty //child class
{
public:
 int gears;

 void print(Bike b)
 {
  cout<<b.name<<" "<<b.price<<" "<<b.mileage<<" "<<b.gears<<endl;
 }
};
int main()
{
 Bike b1;
 b1.name = "Discover";
 b1.price = 100000;
 b1.mileage = 50;

b1.print(b1);
return 0;
}