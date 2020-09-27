#include "DEXGameSliderBezier.h"

sf::Vector2f DEXGameSliderBezier::getCurvePoint(float t) const
{
	sf::Vector2f P1 = this->curve_points[2 * std::floor(t)];
	sf::Vector2f P2 = this->curve_points[2 * std::floor(t) + 1];
	return P1 + (1-t*t)*(this->position - P1) + t*t*(P2-P1);		// Quadratic Bezier
}
