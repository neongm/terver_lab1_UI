#pragma once
#include "MyForm.h"
#include <Windows.h>
#include <string>

// my stuff
#include "conv.h"
#include "prnd_generator.h"
#include "graph_manager.h"
#include "debug_handler.h"
#include "function.h"

prng_generator RAND = prng_generator(1);
graph_manager GM = graph_manager();
debug_handler DH = debug_handler();

using namespace terverlab1UI;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}


System::Void MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	DH.set_new_target_listbox(listbox_DEBUG);
	DH.prefixes(true);
	DH.set_autoclear(true);
	DH.set_autoclear_limit(22);
	GM.set_debug_handler(DH);
}

// testing
System::Void MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	//emperical->Visible = false;
	//label_unsopported->Visible = true;

	size_t expectation = conv::decToInt(numeric_normal_expectation->Value);
	DH.msg("$numeric_normal_expectation value = "+conv::s(expectation));
	size_t dispersion = conv::decToInt(numeric_normal_dispersion->Value);
	DH.msg("$numeric_normal_dispersion value = " + conv::s(dispersion));
	GM.values_clear();
	DH.msg("#normal distribution");
	double window_width = 10 / (double)conv::decToInt(numeric_kde_window_width->Value);
	DH.msg("$window_width value = " + conv::s(window_width));


	for (int i = 0; i < conv::decToInt(numeric_experiments_amount->Value); i++)
	{
		//double rand_uni_normalised = RAND.rand_uniform(0, 1);
		GM.add_point(RAND.rand_normal(expectation, dispersion), 1); // fix hardcoded values
		//GM.add_point(RAND.uni_to_normal(rand_uni_normalised, expectation, dispersion), rand_uni_normalised);
	}
	GM.draw_histogram(hisrogram, "histogram", checkbox_chances->Checked);
	//GM.draw_histogram(hisrogram, "appox func", checkbox_chances->Checked);
	GM.draw_parsen_estimation(hisrogram, "appox func", window_width);

	GM.draw_imperical(emperical, "emperical");
	GM.draw_true_norm(expectation, dispersion, emperical, "true func");
	DH.msg("done", true);
}

System::Void MyForm::button_exponent_dist_Click(System::Object^ sender, System::EventArgs^ e)
{
	size_t coefficient = conv::decToInt(numeric_exponent_coefficient->Value);
	DH.msg("$numeric_exponent_coefficient value = " + conv::s(coefficient));
	DH.msg("#exponential distribution");
	double window_width = 10 / (double)conv::decToInt(numeric_kde_window_width->Value);
	DH.msg("$window_width value = " + conv::s(window_width));

	if (coefficient > 0) {
		GM.values_clear();
		for (int i = 0; i < conv::decToInt(numeric_experiments_amount->Value); i++)
		{
			double rand_uni_normalised = RAND.rand_uniform(0, 1); // getting the value for x and turning it into the exp dist
			GM.add_point(RAND.uni_to_exponent(rand_uni_normalised, coefficient), rand_uni_normalised);
		}
		GM.draw_histogram(hisrogram, "histogram", checkbox_chances->Checked);
		GM.draw_parsen_estimation(hisrogram, "appox func", window_width);
		//2nd
		GM.draw_imperical(emperical, "emperical");

		GM.draw_true_exp(coefficient, emperical, "true func");
		DH.msg("done", true);

	}
	else DH.msg("!coefficiend should be > 0");
}

System::Void MyForm::button_uniform_dist_Click(System::Object^ sender, System::EventArgs^ e)
{
	size_t from = conv::decToInt(numeric_uniform_from->Value);
	DH.msg("$numeric_uniform_from value = " + conv::s(from));
	size_t to = conv::decToInt(numeric_uniform_to->Value);
	DH.msg("$numeric_uniform_to value = " + conv::s(to));
	double window_width = 10 / (double)conv::decToInt(numeric_kde_window_width->Value);
	DH.msg("$window_width value = " + conv::s(window_width));

	GM.values_clear();
	DH.msg("#uniform distribution");
	for (int i = 0; i < conv::decToInt(numeric_experiments_amount->Value); i++)
	{
		double rand_uni_normalised = RAND.rand_uniform(0, 1); // getting the value for x and turning it into the uni dist
		GM.add_point(rand_uni_normalised, RAND.uni_to_uni(rand_uni_normalised, from, to)); 
	}
	GM.draw_histogram(hisrogram, "histogram", checkbox_chances->Checked);
	//GM.draw_histogram(hisrogram, "appox func", checkbox_chances->Checked);
	GM.draw_parsen_estimation(hisrogram, "appox func", window_width);

	GM.draw_imperical(emperical, "emperical");
	GM.draw_true_uni(emperical, "true func");
	DH.msg("done", true);

	DH.msg("done", true);
}

System::Void MyForm::checkbox_autoclear_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	// toggles autoclear mode of the GH-listbox
	if (checkbox_autoclear->Checked) DH.set_autoclear(true);
	else DH.set_autoclear(false);
}

System::Void MyForm::checkbox_debug_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	// toggles the debug mod of the DH-listbox
	if (checkbox_debug->Checked) DH.debug(true);
	else DH.debug(false);
}

System::Void MyForm::button1_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	// clears the DH-listbox
	DH.clear();
}

System::Void  MyForm::numeric_hist_columns_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	// changing columns amount for the graph manager
	GM.set_histogram_bars_amount(conv::decToInt(numeric_hist_columns->Value));
	DH.msg("$set_histogram_bars_amount(" +conv::s(numeric_hist_columns->Value)+ ")");
}