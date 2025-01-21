#include <iostream>
using namespace std;

class game
{
public:
 string name;
 float storage;
};

void print(game g)
{
 cout << g.name <<" "<< g.storage<<" "<<endl;
};

void change(game& g){
 g.name = "Free Fire" ;
};

int main()
{
 game g1;
 g1.name = "BGMI";
 g1.storage = 1000;

 // print(g1);
 change(g1);
 print(g1);

 return 0;
}