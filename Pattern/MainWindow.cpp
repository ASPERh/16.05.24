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
    Circle c2 = Circle(20.f, Vector2f(150.f, 55.f), Color::Yellow);
    Triangle c3 = Triangle(25.f, Vector2f(250.f, 55.f), Color::Blue);
    Triangle c4 = Triangle(35.f, Vector2f(400.f, 55.f), Color::Magenta);
    Rectangle1 c5 = Rectangle1(Vector2f(45.f, 40.f), Vector2f(500.f, 55.f), Color::Red);
    Rectangle1 c6 = Rectangle1(Vector2f(25.f, 20.f), Vector2f(600.f, 55.f), Color::White);
    objects.push_back(&c1);
    objects.push_back(&c2);
    objects.push_back(&c3);
    objects.push_back(&c4);
    objects.push_back(&c5);
    objects.push_back(&c6);
    
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
                Vector2i pos = Mouse::getPosition(window);
                for (int i = 0; i < objects.size(); i++)
                {
                    if (objects[i]->getGlobalBounds().contains(pos.x, pos.y))
                    {
                        selectedObject = objects[i];
                    }
                }
            }
            if (Mouse::isButtonPressed(Mouse::Right) && selectedObject != nullptr) // ��������� ������� LR
            {
                Vector2i pos = Mouse::getPosition(window);
                CloneableObject* tempObj = selectedObject->Clone();
                tempObj->setPosition(Vector2f(pos.x, pos.y));
                objects.push_back(tempObj);
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