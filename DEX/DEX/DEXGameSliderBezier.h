#pragma once
#include "DEXGameSlider.h"
class DEXGameSliderBezier :
    public DEXGameSlider
{
    sf::Vector2f getCurvePoint(float t) const override;
};

