#include <iostream>
#include <string>
#include <vector>


int main() {

    std::string text = "Hello, World!!";

    std::cout << "Size: " << text.size() << "\n";


    std::vector<int> vc = {20, 30, 560, 40, 84, 55, 1, 0, 17, 91};

    int count = 1;

    for(const auto& i : vc) {
        std::cout << "Vector " << count << ": " << i << "\n";
        count++;
    }

    std::cout << "Size vector: " << vc.size() << "\n";


    // add pause
    std::cin.get();
    return 0;
}