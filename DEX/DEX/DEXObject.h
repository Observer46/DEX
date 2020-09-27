#pragma once
#include <SFML/Graphics.hpp>

class DEXObject : public sf::Drawable, public sf::Transformable
{
public:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const = 0;
	sf::Vector2f getPosition() const { return this->position; }
protected:
	sf::Vector2f position;
};

