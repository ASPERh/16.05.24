#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
using namespace std;
using namespace sf;


class CloneableObject  abstract :
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
