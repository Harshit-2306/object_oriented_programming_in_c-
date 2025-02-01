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
int main()
{


 phone p1("vivo", 20000, 6 , 256, 32);
 phone* p2 = new phone("iphone", 100000, 8 , 512, 56);


cout<<p1.name<<" "<<p1.price<<" "<<p1.ram<<" "<<p1.storage<<" "<<p1.camera<<endl;
// cout<<"\n"<<endl;
cout<<p2->name<<" "<<p2->price<<" "<<p2->ram<<" "<<p2->storage<<" "<<p2->camera<<endl;


// cout<<p1.name<<endl;
// phone *c1 = &p1;
//  cout<<p1.name<<" "<<p1.price<<" "<<p1.ram<<" "<<p1.storage<<" "<<p1.camera<<endl;
// cout<<(*c1).name<<endl;


}