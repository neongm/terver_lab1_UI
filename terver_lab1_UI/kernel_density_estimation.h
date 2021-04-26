#pragma once
#include "Func.h"


class kernel_density_estimation : public Func
{
public:
	double operator()(double _x) const override;
	void set_window_width(double _window_width);
	void set_array(std::vector<double> _array);

private:
	double window_width;
	std::vector<double> array;
};

