#pragma once
#include "Func.h"

class emperic : public Func
{
public:
	double operator()(double _x) const override;
	void set_array(std::vector<double> _array);

private:
	std::vector<double> array;
};

