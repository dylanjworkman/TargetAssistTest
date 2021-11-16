// TargetAssist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

struct sVec3f {
    float x;
    float y;
    float z;
};

struct sVec2f {
    float x;
    float y;
};

bool isContained(sVec2f p, sVec2f min, sVec2f max) {
    //if p is contained within bounding volume then return as true
    //return
    if ((p.x >= min.x) && (p.x <= max.x)) {
        if ((p.y >= min.y) && (p.y <= max.y)) {
            return true;
        }
    }
    //else
    return false;
}

int main()
{
    sVec2f min = { 2.23f, 3.8f};
    sVec2f max = { 10.25f, 8.6f};
    sVec2f p = { 4.75f, 7.68f };
    
    bool bContained = isContained(p, min, max);

    if (bContained == true) {
        //destroy enemy
    }


    std::cout << "Contained = " << bContained << "/n";
}

