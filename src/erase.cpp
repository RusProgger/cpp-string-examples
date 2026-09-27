#include <print>
#include <string>
#include <iostream>
#include <vector>

int main() {

    std::string text = "Hello, World!!";

    std::print("{}\n", text);

    // delete index 5 to 6

    text.erase(5, 9); // Начиная с 5 индекса удали 9 символов.

    std::print("Output: {}\n", text); 


    std::vector<int> number = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(auto i : number) {
        std::print("Number: {}\n", i);
    }


    // удаляем элементы из вектора

    number.erase(number.begin() + 2, number.begin() + 5);

    for(auto i : number) {
        std::print("Erase number: {}\n", i);
    }

    
    std::cin.get();
    return 0;
}
