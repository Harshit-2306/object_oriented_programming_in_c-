using namespace std;
#include <iostream>
class student
{
 char name[10];
 int roll_no;
 float marks;

public:
 void getdata()
 {
  cout << "Enter Roll no" << " :";
  cin >> roll_no;
  cout << "Enter Name" << " :";
  cin >> name;
  cout << "Enter marks" << " :";
  cin >> marks;
 }
 void putdata()
 {
  cout << "\n roll_no" << " :";
  cout <<roll_no;
  cout << "\n name" << " :";
  cout <<name;
  cout << "\n marks" << " :";
  cout << marks;
 }
};
int main()
{
 student s;
 s.getdata();
 s.putdata();
}