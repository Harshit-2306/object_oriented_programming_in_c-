#include <iostream>
using namespace std;

class phone
{
public:
 string name;
 int price;
 int ram;
 int storage;
 float camera;

 phone()
 {
 }
 phone(string name, int price, int ram, int storage, float camera)
 {
  this->name = name;
  this->price = price;
  this->ram = ram;
  this->storage = storage;
  this->camera = camera;
 }
};

void change(phone* p)
{
 p->name = "iphone";// (*p).name = "samsung";
}
int main()
{
 phone p1;
 p1.name = "Redmi";
 p1.price = 10000;
 p1.ram = 8;
 p1.storage = 128;
 p1.camera = 64;

 phone p2("vivo", 20000, 6 , 256, 32);

cout<<p1.name<<endl;
change(&p1);
cout<<p1.name<<endl;


// phone *c1 = &p1;
//  // cout<<p1.name<<" "<<p1.price<<" "<<p1.ram<<" "<<p1.storage<<" "<<p1.camera<<endl;
// cout<<(*c1).name<<endl;


}