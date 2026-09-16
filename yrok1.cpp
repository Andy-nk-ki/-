#include <iostream>
#include <clocale>

int main()
{454
    setlocale(LC_ALL, "Russian");
    int slovo{};
    std:: cout << "Введи число: "<< std:: endl;
    std:: cin >> slovo;
    std:: cout << "Вы ввели: " << slovo << std::endl;

    return EXIT_SUCCESS;

}






