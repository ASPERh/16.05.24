#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Windows.h"
#include "MainWindow.h"



int main() {
    
    SetConsoleCP(1251); // установка режима ввода консоли
    SetConsoleOutputCP(CP_UTF8); // установка режима вывода консоли

    system("title Pattern!"); // добавление заголовка приложения

    MainWindow window; // создаем обьект MainWindow

    window.show(); // запуск отображения приложения

    return 0;
}