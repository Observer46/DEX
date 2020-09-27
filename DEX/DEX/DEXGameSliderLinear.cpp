#include "DEXGameSliderLinear.h"

sf::Vector2f DEXGameSliderLinear::getCurvePoint(float t) const
{
    return this->position + t*(this->curve_points[0] - this->position);     // linear interpolation, basic Bezier
}
