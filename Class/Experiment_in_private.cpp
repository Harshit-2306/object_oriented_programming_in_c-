using namespace std;
#include <iostream>
class sample
{
 int a;

public:
 float b;
 void get_data()
 {
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "Enter the value of b: ";
  cin >> b;
 }
 void display()
 {
  cout << "The value of a is: " << a << endl;
  cout << "The value of b is: " << b << endl;
 }
};
int main()
{
 sample s;
 cout << "Enter the value of b: ";
 cin >> s.b;
 s.get_data();
 s.display();
 return 0;
}