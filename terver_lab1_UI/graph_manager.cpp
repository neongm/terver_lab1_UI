#include "graph_manager.h"


GraphManager::GraphManager()
{
	values = {};
}

void GraphManager::set_debug_handler(debug_handler _debug_handler)
{
	DH = _debug_handler;
	DH.msg("#debug handler in graph manager has been set");
}

void GraphManager::values_add(const double& _value)
{
	values.push_back(_value);
}
void GraphManager::add_point(myPoint _point)
{
    points.push_back(_point);
}
void GraphManager::add_point(double _x, double _y)
{
    points.push_back(_x, _y);
}

void GraphManager::set_histogram_bars_amount(size_t _bars_amount)
{
	HISTOGRAM_BARS_AMOUNT = _bars_amount;
}

void GraphManager::values_clear()
{
	values.resize(0);
    histogram_points.clear();
    points.clear();
}


void GraphManager::draw_histogram(
	System::Windows::Forms::DataVisualization::Charting::Chart^ _chart, // target chart object
	System::String^ _series_name, // name of the series it will draw on
	bool _histogram_y_equals_chance  // true to draw chances on y axis
)
{   
	// updating the histogram points so it will be drawn correctly
	histogram_points.clear();
	histogram_points = myPointSeries(points.histogram(HISTOGRAM_BARS_AMOUNT, _histogram_y_equals_chance));

	// updating the chart
	_chart->Series[_series_name]->Points->Clear();
	for (size_t i = 0; i < histogram_points.size(); i++)
	{                                                                     // weird way to round values
		_chart->Series[_series_name]->Points->AddXY(round(histogram_points.at(i).x*1000)/1000, histogram_points.at(i).y);
	}
}

void GraphManager::draw_parsen_estimation(System::Windows::Forms::DataVisualization::Charting::Chart^ _chart, System::String^ _series_name, double window_width)
{
	// getting poins
	kernel_density_estimation kde = kernel_density_estimation();
	kde.set_array(points.x_values());
	kde.set_window_width(window_width);
	myPointSeries pts = myPointSeries(points.points_form_Func(kde, points.min_x(), points.max_x(), 1000));

	// updating the chart
	_chart->Series[_series_name]->Points->Clear();
	for (size_t i = 0; i < pts.size(); i++)
	{                                                                     // weird way to round values
		//DH.msg("$x = " + conv::s(emperical_points.at(i).x) + "; y = " + conv::s(emperical_points.at(i).y));
		_chart->Series[_series_name]->Points->AddXY(pts.at(i).x, pts.at(i).y);
	}
}


void GraphManager::draw_imperical(
	System::Windows::Forms::DataVisualization::Charting::Chart^ _chart, // target chart object
	System::String^ _series_name // name of the series it will draw on
	)
{
	// getting poins
	myPointSeries pts = points;
	myPointSeries emperical_points = pts.empirical_dist_for_given_array();

	// updating the chart
	_chart->Series[_series_name]->Points->Clear();
	for (size_t i = 0; i < emperical_points.size(); i++)
	{                                                                     // weird way to round values
		//DH.msg("$x = " + conv::s(emperical_points.at(i).x) + "; y = " + conv::s(emperical_points.at(i).y));
		_chart->Series[_series_name]->Points->AddXY(emperical_points.at(i).x, emperical_points.at(i).y);
	}
}


// KOSTILI PART


// HERE
void GraphManager::draw_true_uni(
	System::Windows::Forms::DataVisualization::Charting::Chart^ _chart, // target chart object
	System::String^ _series_name // name of the series it will draw on
	)
{	
	std::vector<double> ys;
	std::vector<double> xs;
	for (double i = 0.0; i < 1; i += 0.001)
	{
		xs.push_back(i);
		ys.push_back(i);
	}

	_chart->Series[_series_name]->Points->Clear();
	for (size_t i = 0; i < ys.size(); i++)
	{                                                                     
		_chart->Series[_series_name]->Points->AddXY(xs[i], 1);
	}
}

void GraphManager::draw_true_exp(double _coeff,
	System::Windows::Forms::DataVisualization::Charting::Chart^ _chart, // target chart object
	System::String^ _series_name // name of the series it will draw on
)
{
	std::vector<double> ys;
	std::vector<double> xs;
	for (double i = 0.001; i < 1; i += 0.001)
	{
		xs.push_back(i); 
		ys.push_back(-1 * (1 / _coeff) * log(i));
	}

	_chart->Series[_series_name]->Points->Clear();
	for (size_t i = 0; i < ys.size(); i++)
	{
		_chart->Series[_series_name]->Points->AddXY(ys[i], xs[i]);
	}
}


void GraphManager::draw_true_norm(double _expectation, double _dispersion,
	System::Windows::Forms::DataVisualization::Charting::Chart^ _chart, // target chart object
	System::String^ _series_name // name of the series it will draw on
)
{
	// getting poins
	normal_true nt = normal_true();
	//nt.set_qm(_expectation, _dispersion);
	nt.set_qm(_dispersion, _expectation);

	myPointSeries pts = myPointSeries(points.points_form_Func(nt, points.min_x(), points.max_x(), 1000));


	// updating the chart
	_chart->Series[_series_name]->Points->Clear();
	for (size_t i = 0; i < pts.size(); i++)
	{                                                                     // weird way to round values
		//DH.msg("$x = " + conv::s(emperical_points.at(i).x) + "; y = " + conv::s(emperical_points.at(i).y));
		_chart->Series[_series_name]->Points->AddXY(pts.at(i).x, pts.at(i).y);
	}
}

