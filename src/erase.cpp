#include <print>
#include <string>
#include <iostream>


int main() {

    std::string text = "Hello, World!!";

    std::print("{}\n", text);

    // delete index 5 to 6

    text.erase(5, 9); // Начиная с 5 индекса удали 9 символов.

    std::print("Output: {}\n", text); 


    
    
    std::cin.get();
    return 0;
}
