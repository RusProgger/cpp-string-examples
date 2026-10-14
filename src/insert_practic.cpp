#include <iostream>
#include <print>
#include <string>
#include <windows.h>

// locale 

void localeRussian() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
}

int main() {

    // locale 

    int choice {};

    localeRussian();

    std::string input_text;
    std::print("Введите текст: ");
    std::getline(std::cin, input_text);

    std::print("Ваш текст: {}\n", input_text);

    std::print("\n------------ МЕНЮ ------------\n");

    std::print("1 - Добавить текст:\n2 - Удалить: \n");

    std::print("Ваш ввод: ");

    std::cin >> choice;

    if(choice == 1) {
        std::print("Введите текст который вы хотите добавить: ");
        std::string it;
        std::getline(std::cin, it);
        input_text.insert(input_text.size(), it);
    } if else(choice == 2) {
        
    }


    // add pause
    std::cin.get();
    return 0;
}