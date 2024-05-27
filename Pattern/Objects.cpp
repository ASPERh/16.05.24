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
