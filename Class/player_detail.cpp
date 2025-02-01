#include <iostream>
using namespace std;

class player
{
public:
 string name;
 int runs;
 int highest_score;
 float strike_rate;
 string team;

 player() {//01_Constructor

 }

 player(string n, int r, int h, float s)//02_Constructor
 {
  name = n;
  runs = r;
  highest_score = h;
  strike_rate = s;
 }

 player(string n, int r, int h)//03_Constructor
 {
  name = n;
  runs = r;
  highest_score = h;
 }

 player(string n, string t,int r)//04_Constructor
 {
  name = n;
  runs = r;
  team = t;
 }
};

int main()
{
 player p1("Rohit sharma",10000,264,90.0);

 player p2;
 p2.name = "Virat Kohli";
 p2.runs = 12000;
 p2.highest_score = 183;
 p2.strike_rate = 90.0;

 player p3("Kane Williamson",7000,150);

 player p4("MS Dhoni","CSK",5000);

 player p5(p4);
 p5.name = "Suersh Raina";

 cout<<p1.name<<" "<<p1.runs<<" "<<p1.highest_score<<" "<<p1.strike_rate<<endl;
 cout<<p2.name<<" "<<p2.runs<<" "<<p2.highest_score<<" "<<p2.strike_rate<<endl;
 cout<<p3.name<<" "<<p3.runs<<" "<<p3.highest_score<<" "<<endl;
 cout<<p4.name<<" "<<p4.runs<<" "<<p4.highest_score<<" "<<endl;
 cout<<p5.name<<" "<<p5.runs<<" "<<p5.highest_score<<" "<<endl;
}