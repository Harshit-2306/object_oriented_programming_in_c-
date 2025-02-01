#include <iostream>
using namespace std;

class car
{
public:
 string name;
 int price;
 int seats;
 string type;
};

void print(car c)
{
 cout << c.name <<" "<< c.price <<" "<< c.seats <<" "<< c.type <<" "<< endl;
};

int main()
{
 car c1;
 c1.name = "BMW";
 c1.price = 10000000;
 c1.seats = 5;
 c1.type = "Sedan";
}