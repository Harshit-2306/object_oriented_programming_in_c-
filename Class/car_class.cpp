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

 car c2;
 c2.name = "Fortuner";
 c2.price = 500000;
 c2.seats = 7;
 c2.type = "SUV";

 car c3;
 c3.name = "Audi";
 c3.price = 15000000;
 c3.seats = 4;
 c3.type = "Sedan";

 car c4;
 c4.name = "Wagonar";
 c4.price = 1000000;
 c4.seats = 5;
 c4.type = "Hatchback";

 print(c1);
 print(c2);
 print(c3);
 print(c4);

 return 0;

}
