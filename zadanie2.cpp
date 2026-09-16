#include <iostream>
#include <string>
#include <Clocale>
#include <windows.h>

int main()
{
    SetConsoleCp(65001);
    SetconsoleOutputCP(65001);

    std::setlocale(LC_ALL, "Russian");
    std::string slovo;
    std::cout <<"Введи слова: "<< std::endl;
    std::getline( std::cin , slovo);
    std::cout <<"Вы ввели: " << slovo << std::endl;
    
    return EXIT_SUCCESS;
}