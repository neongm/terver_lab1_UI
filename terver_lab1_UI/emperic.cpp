#include "emperic.h"
#include <algorithm>

double emperic::operator()(double _x) const
{
    // cound all the element that less than x
    size_t less_than_x = 0;
    for (auto element : array) if (element < _x) less_than_x++;

    // F(x) = Nx/n, where Nx - count of exp
    // that less than x, and n - amount
    return  (double)less_than_x /(double)array.size();
}

void emperic::set_array(std::vector<double> _array)
{
    array = _array;
}
