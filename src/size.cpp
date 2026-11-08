#include <iostream>
#include <string>
#include <vector>


int main() {

    std::string text = "Hello, World!!";

    std::cout << "Size: " << text.size() << "\n";


    std::vector<int> vc = {20, 30, 560};

    for(const auto& i : vc) {
        std::cout << "Vector: " << i << "\n";
    }

    std::cout << "Size vector: " << vc.size();
    

    // add pause
    std::cin.get();
    return 0;
}