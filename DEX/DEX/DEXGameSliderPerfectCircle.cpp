#include "DEXGameSliderPerfectCircle.h"
#include <stdexcept>

DEXGameSliderPerfectCircle::DEXGameSliderPerfectCircle()
{
    if (this->curve_points.size() != 2)  throw std::logic_error("Wrong data for creating circle!");
    sf::Vector2f P1 = this->position;
    sf::Vector2f P2 = this->curve_points[0];
    sf::Vector2f P3 = this->curve_points[1];
    float sqr_P1 = P1.x * P1.x + P1.y * P1.y;
    float sqr_P2 = P2.x * P2.x + P2.y * P2.y;
    float sqr_P3 = P3.x * P3.x + P3.y * P3.y;

    float a = P1.x * (P2.y - P3.y) - P1.y * (P2.x - P3.x) + P2.x * P3.y - P3.x * P2.y;
    float b = sqr_P1 * (P3.y - P2.y) + sqr_P2 * (P1.y - P3.y) + sqr_P3 * (P2.y - P1.y);
    float c = sqr_P1 * (P2.x - P3.x) + sqr_P2 * (P3.x - P1.x) + sqr_P3 * (P1.x - P2.x);
    float d = sqr_P1 * (P3.x * P2.y - P2.x * P3.y) + sqr_P2 * (P1.x * P3.y - P3.x * P1.y) + sqr_P3 * (P2.x * P1.y - P1.x * P2.y);

    this->center = sf::Vector2f(-b / (2 * a), -c / (2 * a));
    this->radius = std::sqrt((b * b + c * c - 4 * a * d) / (4 * a * a));
}

sf::Vector2f DEXGameSliderPerfectCircle::getCurvePoint(float t) const
{
    
}