#pragma once
#include <vector>
#include "myPoint.h"
#include <algorithm>

// my functions:
#include "Func.h"
#include "emperic.h"
#include "normal_true.h"
#include "kernel_density_estimation.h"

class myPointSeries
{
private:
	std::vector<myPoint> points_array;

public:
	myPointSeries();
	myPointSeries(std::vector<myPoint> _vector_of_myPoints);
	void push_back(myPoint _point);
	void push_back(double _x, double _y);
	void clear();
	std::vector<double> x_values();
	std::vector<double> y_values();
	myPoint at(size_t _index);
	size_t size();
	size_t count_from_x1_to_x2(double _x1, double _x2);
	size_t count_from_y1_to_y2(double _y1, double _y2);
	double min_x();
	double min_y();
	double max_x();
	double max_y();
	void sort_by_x();

	std::vector<myPoint> points_form_Func(const Func& _function, double _left_bound, double _right_bound, size_t _resolution);

	std::vector<myPoint> histogram(size_t _amount_of_columns, bool y_equals_chance = true);
	std::vector<myPoint> empirical_dist_for_given_array();
};

