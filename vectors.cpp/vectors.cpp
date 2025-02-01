#include <iostream>
#include <vector>

int main()
{
 std::vector<int> v = {10, 20, 30, 40};

 // Using for-each loop
 for (int num : v)
 {
  std::cout << num << " ";
 }
 std::cout << std::endl;

 // Using iterators
 for (auto it = v.begin(); it != v.end(); ++it)
 {
  std::cout << *it << " ";
 }

 return 0;
}
