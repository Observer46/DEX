#pragma once
#include "DEXGameSlider.h"
class DEXGameSliderPerfectCircle :
    public DEXGameSlider
{
    DEXGameSliderPerfectCircle();
    sf::Vector2f getCurvePoint(float t) const override;
private:
    sf::Vector2f center;
    float radius;

};

