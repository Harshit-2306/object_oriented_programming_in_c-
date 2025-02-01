#include<iostream>
using namespace std;
class cricketer{
 public:
 string name;
 int runs;

 cricketer(string name , int runs){
  this->name = name;
  this->runs = runs;
 }
};
int main(){
 cricketer c1("Rohit Sharma", 264);
 cricketer c2("Virat Kohli", 183);

 cout<<c1.name<<" "<<c1.runs<<endl;
 cout<<c2.name<<" "<<c2.runs<<endl;
}