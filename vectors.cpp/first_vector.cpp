#include <iostream>
#include <vector>
using namespace std;
int main()
{
 vector<int> vec;

 cout << "size = " << vec.size() << endl;
 vec.push_back(25);
 vec.push_back(56);
 vec.push_back(84);
  cout << "size after push back = " << vec.size() << endl;

vec.pop_back();
 cout << "size after push back = " << vec.size() << endl;
 for( int v : vec)
  cout<< v << endl;
  vec.empty();
  cout<<"size = "<<vec.size()<<endl;
}