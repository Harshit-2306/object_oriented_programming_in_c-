using namespace std;
#include <iostream>
class library
{
 int book_number;
 char book_name[50];
 char publisher[20];
 float price;
 int no_of_copies;
 int no_of_copies_issued;

public:
 void initial_value()
 {
  cout << "Book Numbers"<<" ";
  cin >> book_number;
  cout << "Book Name"<<" ";
  cin >> book_name;
  cout << "Publisher"<<" ";
  cin >> publisher;
  cout << "price"<<" ";
  cin >> price;
  cout << "No of copies"<<" ";
  cin >> no_of_copies;
  cout << "No of copies issued"<<" ";
  cin >> no_of_copies_issued;
 }

 void availibility()
 {
  int r;
  r = no_of_copies - no_of_copies_issued;
 }

 void return_book()
 {
 }

 void display()
 {
  
 }
};

int main()
{
 library l;
 l.initial_value();
 l.availibility();
 l.return_book();
 l.display();
}