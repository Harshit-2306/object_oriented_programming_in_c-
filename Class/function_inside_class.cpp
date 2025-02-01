#include<iostream>
using namespace std;

class car
{
 public:
 string name;
 int price;
 int seats;
 float mileage;

 car(string name,int price,int seats,float mileage)
 {
  this-> name = name;
  this-> price = price;
  this-> seats = seats;
  this-> mileage = mileage;
 }

 void print(int a)
 {
  cout<<this->name<<" "<<this->price<<" "<<this->seats<<" "<<this->mileage<<endl;
  // cout<<a<<endl;
 }
};

int main()
{

car c1("BMW",10000000,5,10);
car c2("Fortuner",500000,7,15);
car c3("Audi",15000000,4,12);
car c4("Wagonar",1000000,5,20);

// c1.name = "G Wagon";
c1.print(2);
c2.print(3);
c3.print(5);
c4.print(5);
}