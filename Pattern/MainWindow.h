#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <windows.h>
#include "Objects.h"
#include <string>
#include <iostream>


class   MainWindow // обьявление класса 
{
private:
    RenderWindow window; // обьявление SFML окна
public:
    MainWindow(); // обьявление конструткора

    virtual void show(); // обьявление метода show
    
};