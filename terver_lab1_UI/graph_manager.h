#pragma once
#include "MyForm.h"
#include <algorithm>
#include <vector>

// for my stuff:
#include "myPoint.h"
#include "getminmax.h"
#include "myPointSeries.h"
#include "function.h"
// for debug:
#include "debug_handler.h"
#include "conv.h"
#include "prnd_generator.h"

class GraphManager
{
private:
	std::vector<double> values;
	myPointSeries histogram_points;
	myPointSeries points;
	size_t HISTOGRAM_BARS_AMOUNT = 10;
	debug_handler DH;
public:
	// default constructor sets up the values vector
	GraphManager();
	void set_debug_handler(debug_handler _debug_handler);
	// adding/clearing values
	void values_add(const double& _value);
	void add_point(myPoint _point);
	void add_point(double _x, double _y);
	void set_histogram_bars_amount(size_t _bars_amount);
	void values_clear();

	// histogram and stuff
	void draw_histogram(System::Windows::Forms::DataVisualization::Charting::Chart^ _chart, System::String^ _series_name, bool histogram_y_equals_chance = true);
	void draw_parsen_estimation(System::Windows::Forms::DataVisualization::Charting::Chart^ _chart, System::String^ _series_name, double window_width);
	void draw_imperical(System::Windows::Forms::DataVisualization::Charting::Chart^ _chart, System::String^ _series_name);
	void draw_true_uni(System::Windows::Forms::DataVisualization::Charting::Chart^ _chart, System::String^ _series_name);
	void draw_true_exp(double _coeff, System::Windows::Forms::DataVisualization::Charting::Chart^ _chart, System::String^ _series_name);
	void draw_true_norm(double _expectation, double _dispersion, System::Windows::Forms::DataVisualization::Charting::Chart^ _chart, System::String^ _series_name);
};

