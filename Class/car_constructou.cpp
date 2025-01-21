#include <iostream>
using namespace std;

class game
{
public:
 string name;
 float storage;

 game(string n,float s)
 {
 name = n;
 storage = s;
 }
};


int main()
{
 game g1("BGMI",1000);
 // g1.name = "BGMI";
 // g1.storage = 1000;

cout<<g1.name<<" "<<g1.storage<<" "<<endl;

 return 0;
}