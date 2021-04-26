#pragma once

#include <vector>
#include <cmath>

#define M_PI 3.14159265358979323846
#define M_E 2.71828182845904523536

class Func
{
public:
	virtual double operator() (double _x) const = 0;
	virtual std::vector<double> calculate(const std::vector<double>& args);
	virtual ~Func() = default;
};
