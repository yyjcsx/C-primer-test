#pragma once
class square
{
public:
	square() = default;
	square(const double& d) :diameter(d) {};
	virtual double acreage() const ;
protected:
	double diameter = 0.0;
	
};

