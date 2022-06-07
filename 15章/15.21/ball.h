#pragma once
#include "circle.h"
class ball :
    public circle
{
public:
    ball() = default;
    ball(const double& d) : circle(d) {}
    virtual double acreage()const override;
};

