#include "myPointSeries.h"

struct pred_bigger
{
	bool operator() (myPoint x1, myPoint x2)
	{
		return x1.x > x2.x;
	}
};


myPointSeries::myPointSeries(){}

myPointSeries::myPointSeries(std::vector<myPoint> _vector_of_myPoints)
{
	points_array = _vector_of_myPoints;
}

void myPointSeries::push_back(myPoint _point)
{
	points_array.push_back(_point);
}

void myPointSeries::push_back(double _x, double _y)
{
	points_array.emplace_back(myPoint(_x, _y));
}	

void myPointSeries::clear()
{
	points_array.resize(0);
}

std::vector<double> myPointSeries::x_values()
{
	std::vector<double> x_values;
	for (auto el : points_array) x_values.push_back(el.x);
	return x_values;
}

std::vector<double> myPointSeries::y_values()
{
	std::vector<double> y_values;
	for (auto el : points_array) y_values.push_back(el.y);
	return y_values;
}

myPoint myPointSeries::at(size_t _index)
{
	return points_array.at(_index);
}

size_t myPointSeries::size()
{
	return points_array.size();
}

size_t  myPointSeries::count_from_x1_to_x2(double _x1, double _x2)
{
	size_t counter = 0;
	for (auto el : points_array) if (el.x < _x2 && el.x > _x1) counter++;
	return counter;
}

size_t  myPointSeries::count_from_y1_to_y2(double _y1, double _y2)
{
	size_t counter = 0;
	for (auto el : points_array) if (el.y < _y2 && el.y > _y1) counter++;
	return counter;
}

double myPointSeries::min_x() 
{
	double min = points_array[0].x;
	for (auto el : points_array) if (el.x < min) min = el.x;
	return min;
}

double myPointSeries::max_x() 
{
	double max = points_array[0].x;
	for (auto el : points_array) if (el.x > max) max = el.x;
	return max;
}

double myPointSeries::min_y()
{
	double min = points_array[0].y;
	for (auto el : points_array) if (el.y < min) min = el.y;
	return min;
}

double myPointSeries::max_y()
{
	double max = points_array[0].y;
	for (auto el : points_array) if (el.y > max) max = el.y;
	return max;
}


void myPointSeries::sort_by_x()
{
	pred_bigger pred = pred_bigger();
	std::sort(points_array.begin(), points_array.end(), pred);
}

std::vector<myPoint> myPointSeries::points_form_Func(const Func &_function, double _left_bound, double _right_bound, size_t _resolution=1000)
{
	std::vector<myPoint> result_points;
	double step = (_right_bound - _left_bound) / _resolution;
	for (double i = _left_bound; i < _right_bound; i += step)
	{
		result_points.push_back(myPoint(i, _function(i)));
	}
	return result_points;
}

std::vector<myPoint> myPointSeries::histogram(size_t _amount_of_columns, bool y_equals_chance)
{
	// return _amount_of_columns points with y value equal to amount
	// of values in the range it represents for each column
	std::vector<myPoint> result_points;
	double range = (max_x() - min_x()); 
	double minimum_x = min_x();
	double step = range / (_amount_of_columns-1);  

	for (size_t i = 0; i < _amount_of_columns-1; i++)
	{
		double x_lower_bound = minimum_x + step * i;
		double x_upper_bound = x_lower_bound + step;
		myPoint point = myPoint(x_upper_bound-step/2, (double)count_from_x1_to_x2(x_lower_bound, x_upper_bound));
		if (y_equals_chance) point.y /= size();
		result_points.push_back(point);  
	}
	return result_points;
}


std::vector<myPoint> myPointSeries::empirical_dist_for_given_array() 
{
	// returns array of points for imperical function graph
	// mb add a resolution modifier
	std::vector<myPoint> result_points; // result container

	size_t resolution = 2000;
	emperic emp_func = emperic();
	emp_func.set_array(x_values());

	for ( double i = min_x(); i < max_x(); i += (max_x() - min_x()) / resolution )
	{
		result_points.push_back(myPoint(i, emp_func(i)));
	}
	return result_points;
}
