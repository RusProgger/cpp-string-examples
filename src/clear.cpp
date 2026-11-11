#include <iostream>
#include <string>

int main() {

    std::string text = "Text, Wolrd!!!";

    std::cout << "Before: " << text << "\n";

    std::cout << "Size: " << text.size() << "\n";

    text.clear();

    std::cout << "After: " <<  text <<  "\n";
    
    std::cout << text.size() << "\n";

    return 0;
}