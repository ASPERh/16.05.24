#include "Objects.h"

Circle::Circle(float radius, Vector2f postition, Color color)
{
	this->radius = radius;
	this->postition = postition;
	this->color = color;
	this->circle = CircleShape();
	circle.setRadius(radius);
	circle.setPosition(postition);
	circle.setFillColor(color);
}

void Circle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(circle);
}

CloneableObject* Circle::Clone()
{
	Circle* c = new Circle(radius, postition, color);
	return c;
}

FloatRect Circle::getGlobalBounds()
{
	return circle.getGlobalBounds();
}

void Circle::setPosition(Vector2f position)
{
	circle.setPosition(position);
}

Triangle::Triangle(float radius, Vector2f postition, Color color)
{
	this->radius = radius;
	this->postition = postition;
	this->color = color;
	this->triangle = CircleShape(80, 3);
	triangle.setRadius(radius);
	triangle.setPosition(postition);
	triangle.setFillColor(color);
}

Rectangle1::Rectangle1(Vector2f size, Vector2f postition, Color color)
{
	this->size = size;
	this->postition = postition;
	this->color = color;
	this->rectangle1 = RectangleShape();
	rectangle1.setSize(size);
	rectangle1.setPosition(postition);
	rectangle1.setFillColor(color);
}

void Triangle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(triangle);
}

void Rectangle1::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(rectangle1);
}

CloneableObject* Triangle::Clone()
{
	Triangle* c = new Triangle(radius, postition, color);
	return c;
}

CloneableObject* Rectangle1::Clone()
{
	Rectangle1* c = new Rectangle1(size, postition, color);
	return c;
}

FloatRect Triangle::getGlobalBounds()
{
	return triangle.getGlobalBounds();
}

FloatRect Rectangle1::getGlobalBounds()
{
	return rectangle1.getGlobalBounds();
}

void Triangle::setPosition(Vector2f position)
{
	triangle.setPosition(position);
}

void Rectangle1::setPosition(Vector2f position)
{
	rectangle1.setPosition(position);
}