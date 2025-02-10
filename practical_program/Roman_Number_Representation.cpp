#include <iostream>
using namespace std;

int main()
{
 int number;
 int ones, tens, hundreds, thousands;

 cout << "Enter the number: ";
 cin >> number;

 if (number <= 0 || number > 3000)
 {
  cout << "Invalid number" << endl;
  return 1;
 }

 thousands = (number / 1000) * 1000;
 hundreds = ((number / 100) % 10) * 100;
 tens = ((number / 10) % 10) * 10;
 ones = (number % 10);

 switch (thousands)
 {
 case 1000:
  cout << "M";
  break;
 case 2000:
  cout << "MM";
  break;
 case 3000:
  cout << "MMM";
  break;
 }

 switch (hundreds)
 {
 case 100:
  cout << "C";
  break;
 case 200:
  cout << "CC";
  break;
 case 300:
  cout << "CCC";
  break;
 case 400:
  cout << "CD";
  break;
 case 500:
  cout << "D";
  break;
 case 600:
  cout << "DC";
  break;
 case 700:
  cout << "DCC";
  break;
 case 800:
  cout << "DCCC";
  break;
 case 900:
  cout << "CM";
  break;
 }

 switch (tens)
 {
 case 10:
  cout << "X";
  break;
 case 20:
  cout << "XX";
  break;
 case 30:
  cout << "XXX";
  break;
 case 40:
  cout << "XL";
  break;
 case 50:
  cout << "L";
  break;
 case 60:
  cout << "LX";
  break;
 case 70:
  cout << "LXX";
  break;
 case 80:
  cout << "LXXX";
  break;
 case 90:
  cout << "XC";
  break;
 }

 switch (ones)
 {
 case 1:
  cout << "I";
  break;
 case 2:
  cout << "II";
  break;
 case 3:
  cout << "III";
  break;
 case 4:
  cout << "IV";
  break;
 case 5:
  cout << "V";
  break;
 case 6:
  cout << "VI";
  break;
 case 7:
  cout << "VII";
  break;
 case 8:
  cout << "VIII";
  break;
 case 9:
  cout << "IX";
  break;
 }

 cout << endl; // Newline for better output formatting
 return 0;
}


