#include "Func.h"


std::vector<double> Func::calculate(const std::vector<double> & _x_array) {
    std::vector<double> results;
    for (auto x : _x_array)
        results.push_back(this->operator()(x));
    return results;
}
