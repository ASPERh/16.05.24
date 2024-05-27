#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
using namespace std;
using namespace sf;


class CloneableObject abstract :
	public Drawable
{
protected:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)  const abstract;
public:
	virtual CloneableObject* Clone() abstract;
	virtual FloatRect getGlobalBounds() abstract;
	virtual void setPosition(Vector2f position) abstract;
};

class Circle : public CloneableObject
{
private: 
	CircleShape circle;
	float radius;
	Vector2f postition;
	Color color;
public:
	Circle(float radius, Vector2f postition, Color color);
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	virtual CloneableObject* Clone() override;
	virtual FloatRect getGlobalBounds();
	virtual void setPosition(Vector2f position);
};

class Triangle : public CloneableObject
{
private:
	CircleShape triangle;
	float radius;
	Vector2f postition;
	Color color;
public:
	Triangle(float radius, Vector2f postition, Color color);
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	virtual CloneableObject* Clone() override;
	virtual FloatRect getGlobalBounds();
	virtual void setPosition(Vector2f position);
};

class Rectangle1 : public CloneableObject
{
private:
	RectangleShape rectangle1;
	Vector2f size;
	Vector2f postition;
	Color color;
public:
	Rectangle1(Vector2f size, Vector2f postition, Color color);
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	virtual CloneableObject* Clone() override;
	virtual FloatRect getGlobalBounds();
	virtual void setPosition(Vector2f position);
};