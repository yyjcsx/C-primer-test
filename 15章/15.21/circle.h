#pragma once
#include "square.h"
class circle :
    public square
{
public:
    circle() = default;
    circle(const double& d) :square(d) {}
    virtual double acreage()const override;
protected:
    const double pie = 3.1415926;
};

