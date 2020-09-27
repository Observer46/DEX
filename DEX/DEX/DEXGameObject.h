#pragma once
#include "DEXObject.h"
class DEXGameObject :
    public DEXObject
{
    DEXGameObject(/*parsed parameters*/);
    
private:
    int time, type, hit_sound;
    //Rest of hit-stuff
};

