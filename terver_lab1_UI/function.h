#pragma once
#include <cmath>

class function
{
public:
	double last_value;
	virtual void calc(double x) {};
	double get_last_value() { return last_value; };
};


class uniform_dist_true_function : public function
{
public:
	void calc(double x) 
	{
		last_value = x;
	}
};

class exp_dist_true_function : public function
{
public:
	double coeff = 1;
	void set_coeff(double _coeff) { coeff = _coeff; }

	void calc(double x)
	{
		last_value = (-1 * (1 / coeff) * log(x));
	}
};