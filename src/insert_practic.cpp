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

    localeRussian();

    std::string input_text;
    std::print("Введите текст: ");
    std::getline(std::cin, input_text);

    std::print("Ваш текст: {}\n", input_text);

    std::print("\n------------ МЕНЮ ------------\n");

    std::print("1 - Добавить текст:\n2 - Удалить: \n");

    std::print("Ваш ввод: ");


    // add pause
    std::cin.get();
    return 0;
}