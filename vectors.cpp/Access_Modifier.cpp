#include <iostream>
using namespace std;
class student
{
public:
 int rollL_no;
 string name;

 student(int r, string n, float m)
 {
  rollL_no = r;
  name = n;
  marks = m;
 }

 float get_marks()//getter
 {
  return marks;
 }

 void set_marks(float m)//setter
{
 marks = m;
}

private:
 float marks;
};

int main()
{
 student s1(45, "Harshit Tiwari", 91.9);
 cout << s1.get_marks() << endl;
 s1.set_marks(98.9);
 cout << s1.get_marks() << endl;
}