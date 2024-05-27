#include "MainWindow.h"


MainWindow::MainWindow()
{
    window.create(VideoMode(1920, 1080), L"Pattern!",Style::Default); // �������� �������� SFML ����
    //Glyph::lsbDelta = 1;
    
}

void MainWindow::show() // ����� ������� ��������� ����
{
    vector <CloneableObject*> objects;
    CloneableObject* selectedObject = nullptr;
    Circle c1 = Circle(10.f, Vector2f(55.f, 55.f), Color::Green);
    Circle c2 = Circle(15.f, Vector2f(100.f, 100.f), Color::Yellow);
    objects.push_back(&c1);
    objects.push_back(&c2);

    while (window.isOpen()) // ������� ���� ���������
    {
        
        Event event; // �������� �������
        while (window.pollEvent(event)) // ��������� �������
        {

            switch (event.type) // �������� �� ���� �������
            {
            case Event::Closed:
                window.close(); // ������� ��������  
                break;
            default:
                break;

            }

            if (Mouse::isButtonPressed(Mouse::Left)) // ��������� ������� LB
            {

            }
        }

        window.clear(); // ������� ������
        for (int i = 0; i < objects.size(); i++)
        {
            window.draw(*objects[i]);
        }
        window.display(); // ��������� �������� ����
    }
}