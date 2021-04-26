#pragma once
#include <cmath>

#define M_PI 3.14159265358979323846
#define M_E 2.71828182845904523536

class prng_generator
{
private: 
	size_t seed;
public:
	prng_generator();
	prng_generator(const size_t& _seed);

	void set_seed(const size_t& _seed);

	// returns double in the given interval
	// _min = 0
	// _max = 1
	double rand_uniform(const double& _min, const double& _max);

	// returns double number with exponential
	// destribution
	// _max = 1
	double rand_exponent(const double& _max);

	// returns double number with normal
	// distribution
	// _math_expectation = 0
	// _deviation = 1
	double rand_normal(const double& _math_expectation, const double& _deviation);

	double uni_to_exponent(double _value, const double& _max);
	double uni_to_normal(double _value, const double& _math_expectation, const double& _deviation);
	double uni_to_uni(double _value, const double& _min, const double& _max);
};

