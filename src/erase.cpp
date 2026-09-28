#include <print>
#include <string>
#include <iostream>
#include <vector>

int main() {

    std::string text = "Hello, World!!";

    std::print("{}\n", text);

    // начиная с индекса 5 удалить 9 символов

    text.erase(5, 9); // Начиная с 5 индекса удали 9 символов.

    std::print("Output: {}\n", text); 


    std::vector<int> number = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(auto i : number) {
        std::print("Number: {}\n", i);
    }


    // удаляем элементы из вектора

    number.erase(number.begin() + 2, number.begin() + 5);

    // выводим результат

    for(auto i : number) {
        std::print("Erase number: {}\n", i);
    }


    std::print("Size vector: {}", number.size());

    
    std::cin.get();
    return 0;
}
