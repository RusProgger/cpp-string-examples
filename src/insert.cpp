#include <iostream>
#include <print>
#include <string>


// insert вставить текст

int main() {

    // std::string name = "Lorem Lorem Ipsum is simply dummy text of the printing and typesetting industry.";

    // name.insert(name.size(), " GoodBye!!!");

    // std::print("Text: {}\n", name);

    std::string text;
    std::string text_2;

    std::print("Enter text: ");
    std::getline(std::cin, text);
    std::print("Enter text 2: ");
    std::getline(std::cin, text_2);
    text.insert(text.size(), text_2);

    std::print("Original: {}\n", text);
    std::print("Output copy: {}\n", text_2);



    std::cin.get();
    return 0;
}