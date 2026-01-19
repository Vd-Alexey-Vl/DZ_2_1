#include <iostream>
#include <windows.h>

int main()

{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    std::cout << " Введите число: \n";
    std::cin >> num;
    std::cout << "Вы ввели: \n" << num << std::endl;

    return EXIT_SUCCESS;
}
