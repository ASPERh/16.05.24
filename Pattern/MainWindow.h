#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <windows.h>
#include "Objects.h"
#include <string>
#include <iostream>


class   MainWindow // ���������� ������ 
{
private:
    RenderWindow window; // ���������� SFML ����
public:
    MainWindow(); // ���������� ������������

    virtual void show(); // ���������� ������ show
    
};