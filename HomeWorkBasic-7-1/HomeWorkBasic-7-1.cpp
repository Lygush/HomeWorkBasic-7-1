#include <iostream>

#define MODE 1
#ifndef MODE
#error Constant MODE is not defined
#else
#if (MODE == 1)
void add() {
    std::cout << "Работаю в боевом режиме\n";
    double first{}, second{};
    std::cout << "Введите первое число: ";
    std::cin >> first;
    std::cout << "Введите второе число: ";
    std::cin >> second;
    std::cout << "Результат сложения: " << first + second;
}
#endif
#endif // !MODE


int main() {
    setlocale(LC_ALL, "Russian");

#if (MODE == 0)
    std::cout << "Работаю в тестовом режиме";
#elif (MODE == 1)
    add();
#else
    std::cout << "Неизвестный режим. Завершение работы";
#endif
}
