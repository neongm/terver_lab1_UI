#pragma once
#include <vector>

template<typename T>
T get_max_value(const std::vector<T>& _vec)
{
    T max_value = _vec.at(0);
    for (auto el : _vec) if (el > max_value) max_value = el;
    return max_value;
}

template<typename T>
T get_min_value(const std::vector<T>& _vec)
{
    T min_value = _vec.at(0);
    for (auto el : _vec) if (el < min_value) min_value = el;
    return min_value;
}