#include <iostream>
using namespace std;
class student
{
private:
 int rollL_no;
 string name;
 float marks;

public:
 student(int r, string n, float m)
 {
  rollL_no = r;
  name = n;
  marks = m;
 }

 string get_name()//getter
 {
  return name;
 }

 void set_name(string n)//setter
 {
  name = n;
 }

 int get_roll_no()//getter
 {
  return rollL_no;
 }

 void set_roll_no(int r)//setter
 {
  rollL_no = r;
 }

 float get_marks()//getter
 {
  return marks;
 }

 void set_marks(float m)//setter
{
 marks = m;
}

};

int main()
{
 student s1(45, "Harshit Tiwari", 91.9);
 cout << s1.get_marks() << endl;
 s1.set_marks(98.9);
 cout << s1.get_marks() << endl;
 cout << s1.get_roll_no() << endl;
 s1.set_roll_no(50);
 cout << s1.get_roll_no() << endl;
 cout << s1.get_name() << endl;
 s1.set_name("Harshit");
 cout << s1.get_name() << endl;
 s1.set_name("virat");
  cout << s1.get_name() << endl;
 return 0;
}