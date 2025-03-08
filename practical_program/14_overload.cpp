#include <iostream>
using namespace std;
class volume
{
public:
 double sph(double R)
 {
  return (4 / 3) * 3.14 * R * R * R;
 }
 double cyl(double R, double H)
 {
  return 3.14 * R * R * H;
 }
 double cub(double L, double B, double H)
 {
  return L * B * H;
 }
};

int main()
{
 volume v;
 cout << v.sph(5) << endl;
 cout << v.cyl(5, 10) << endl;
 cout << v.cub(5, 6, 10) << endl;
 return 0;
}
