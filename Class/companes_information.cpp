#include <iostream>
using namespace std;

class Companies
{
public:
 string name;
 string location;
 string type;
 int employees;
 int revenue;
 int profit;
 int assets;
 int market_value;
 int year_founded;
 int year_public;
 int year_private;
 int year_acquired;
 int year_merged;

 Companies()
 {
 }

 Companies(string n, string l, string t, int em, int r, int pr, int as, int mar, int y, int pu, int pri, int ac, int mer)
 {
  name = n;
  location = l;
  type = t;
  employees = em;
  revenue = r;
  profit = pr;
  assets = as;
  market_value = mar;
  year_founded = y;
  year_public = pu;
  year_private = pri;
  year_acquired = ac;
  year_merged = mer;
 }

 Companies(string n, string l, string t, int em, int r, int pr, int as)
 {
  name = n;
  location = l;
  type = t;
  employees = em;
  revenue = r;
  profit = pr;
  assets = as;
 }

};

int main()
{
 Companies c1("Google","California","Public",100000,1000000,100000,1000000,10000000,1998,2004,0,0,0);

 Companies c2;
 c2.name = "Microsoft";
 c2.location = "Washington";
 c2.type = "Public";
 c2.employees = 150000;
 c2.revenue = 2000000;
 c2.profit = 200000;
 c2.assets = 2000000;

 cout<<c1.name<<"\t"<<c1.location<<"\t"<<c1.type<<"\t"<<c1.employees<<"\t"<<c1.revenue<<"\t"<<c1.profit<<"\t"<<c1.assets<<"\t"<<c1.market_value<<"\t"<<c1.year_founded<<"\t"<<c1.year_public<<"\t"<<c1.year_private<<"\t"<<c1.year_acquired<<"\t"<<c1.year_merged<<endl;
 cout<<c2.name<<"\t"<<c2.location<<"\t"<<c2.type<<"\t"<<c2.employees<<"\t"<<c2.revenue<<"\t"<<c2.profit<<"\t"<<c2.assets<<"\t"<<endl;
}