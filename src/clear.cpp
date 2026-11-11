#include <iostream>
#include <string>

int main() {

    std::string text = "Text, Wolrd!!!";

    std::cout << "Before: " << text << "\n";

    text.clear();

    std::cout << "After: " <<  text <<  text.size() << "\n";

    return 0;
}