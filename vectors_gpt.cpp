#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;

    v.push_back(10);  // Adds 10 to the end
    v.push_back(20);  // Adds 20 to the end
    v.push_back(30);  // Adds 30 to the end

    std::cout << "Size: " << v.size() << std::endl;  // Output: 3

    v.pop_back(); // Removes last element (30)

    std::cout << "Size after pop_back: " << v.size() << std::endl;  // Output: 2

    return 0;
}
