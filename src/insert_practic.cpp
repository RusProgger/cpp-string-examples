#include <iostream>
#include <print>
#include <string>

// locale 

void localeRussian() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
}

int main() {

    // locale 

    localeRussian();

    std::string input_text;
    std::print("Введите текст: ");
    std::getline(std::cin, input_text);

    



    // add pause
    std::cin.get();
    return 0;
}