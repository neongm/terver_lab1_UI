#include "prnd_generator.h"

// temporary:
#include "temp_rand.h"

prng_generator::prng_generator()
{
	seed = 1;
}

prng_generator::prng_generator(const size_t& _seed)
{
	seed = _seed;
}

void prng_generator::set_seed(const size_t& _seed)
{
	seed = _seed;
}

double prng_generator::rand_uniform(const double& _min = 0, const double& _max = 1)  // NEEDS SOME TWEAKING
{
	//seed = ( seed * 73192 + 95121 ) % 100000;
	// push it to defined bounds:
	//return ( _max - _min ) * seed / 100000 + _min;
	return rnd::random_real(0, 1);
}

double prng_generator::rand_exponent(const double& _max = 1)
{
	return -1 * (1 / _max) * log(rand_uniform());
}

double prng_generator::rand_normal(const double& _math_expectation = 0, const double& _deviation = 1)
{
	double rvalue_1 = rand_uniform();
	double rvalue_2 = rand_uniform();
	// here is some fancy wtf-formulas from the book:
	double first_part = (pow(-2 * log(rvalue_1), 0.5) * cos(2 * M_PI * rvalue_2));
	return first_part * _deviation + _math_expectation;
}

double prng_generator::uni_to_exponent(double _value, const double& _max)
{
	// value should be in the 0-1 range
	return -1 * (1 / _max) * log(_value);
}
double prng_generator::uni_to_normal(double _value, const double& _math_expectation, const double& _deviation)
{
	// value should be in the 0-1 range
	// HELP ME
	return 1;
}
double prng_generator::uni_to_uni(double _value, const double& _min, const double& _max)
{
	// value should be in the 0-1 range
	return (_max - _min) * _value + _min;
}