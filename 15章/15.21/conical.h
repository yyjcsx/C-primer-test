#pragma once
#include "circle.h"
class conical :
    public circle
{
public:
    conical() = default;
    conical(const double d,const double g) :circle(d), generatrix(g) {}
    virtual double acreage() const override;
protected:
    double generatrix = 0.0;
};

