#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
 string author;
 string title;
 float price;

public:

 void input()
 {
  cout << "Enter Author Name: ";
  cin.ignore();
  getline(cin, author);
  cout << "Enter Book Title: ";
  getline(cin, title);
  cout << "Enter Price: ";
  cin >> price;
 }

 void display()
 {
  cout << "Author: " << author << endl;
  cout << "Title: " << title << endl;
  cout << "Price: Rs." << price << endl;
 }
};

int main()
{
 const int SIZE = 5;
 Book books[SIZE];

 for (int i = 0; i < SIZE; i++)
 {
  cout << "\nBook " << (i + 1) << ":" << endl;
  books[i].input();
 }


 for (int i = 0; i < SIZE; i++)
 {
  cout << "\nBook " << (i + 1) << ":" << endl;
  books[i].display();
 }

 return 0;
}