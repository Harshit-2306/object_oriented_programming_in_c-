#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    std::cout << "Size: " << v.size() << std::endl;

    v.pop_back();

    std::cout << "Size after pop_back: " << v.size() << std::endl;

    return 0;
}
