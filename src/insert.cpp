#include <iostream>
#include <print>
#include <string>


// insert вставить текст

int main() {

    std::string name = "LoremLorem Ipsum is simply dummy text of the printing and typesetting industry.";

    name.insert(name.size(), " GoodBye!!!");

    std::print("Text: {}\n", name);

    std::cin.get();
    return 0;
}