#pragma once
#include "DEXGameObject.h"
#include <vector>

class DEXGameSlider :
    public DEXGameObject
{
    virtual sf::Vector2f getCurvePoint(float t) const = 0;
protected:
    char silder_type;      //  B - Bezier, C - Centripetal catmull-rom, L - Linear, P - Perfect Circle
    int length;
    std::vector <sf::Vector2f> curve_points;
};

