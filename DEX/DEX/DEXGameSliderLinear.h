#pragma once
#include "DEXGameSlider.h"
class DEXGameSliderLinear :
    public DEXGameSlider
{
    sf::Vector2f getCurvePoint(float t) const override;
};

