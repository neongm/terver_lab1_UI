#include "normal_true.h"

double normal_true::operator()(double _x) const
{
	//double left_part = 1 / q * pow(2 * (M_PI), 0.5) * M_E;
	//double right_part = -1 * pow(_x - m, 2) / (2 * pow(q, 2));
	//return pow(left_part, right_part);

	//double a = 5;
	//double b = 1;

	double first_part = 1 / (q * pow(2 * M_PI, 0.5));
	return first_part * pow(M_E, -1 * (pow(_x - m, 2) / (2 * pow(q, 2))));
}

void normal_true::set_q(double _q)
{
	q = _q;
}

void normal_true::set_m(double _m)
{
	m = _m;
}

void normal_true::set_qm(double _q, double _m)
{
	q = _q;
	m = _m;
}

