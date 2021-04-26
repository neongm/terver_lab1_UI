#pragma once
#include "Func.h"


class normal_true : public Func
{
public:
	double operator()(double _x) const override;
	void set_q(double _q);
	void set_m(double _m);
	void set_qm(double _q, double _m);

private:
	double q;
	double m;
	std::vector<double> array;
};

