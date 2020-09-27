#pragma once
#include <SFML/Graphics.hpp>
#include "DEXObject.h"
#include <vector>

class DEXMenu : public sf::Drawable, public sf::Transformable
{
public:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const = 0;

private:
	std::vector<DEXObject> menu_objects;
};

