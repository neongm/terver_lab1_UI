#pragma once
#include <msclr\marshal_cppstd.h>
#include "conv.h"

int conv::decToInt(const System::Decimal& dec)
{
	// System::Decimal to int32
	return dec.ToInt32(dec);
}

std::string conv::s(System::String^ str)
{
	// System::String to std::string
	return msclr::interop::marshal_as<std::string>(str);
}

std::string conv::s(int _int)
{
	return std::to_string(_int);
}

std::string conv::s(size_t _size_t)
{
	return std::to_string(_size_t);
}

std::string conv::s(double _double)
{
	return std::to_string(_double);
}

std::string conv::s(float _float)
{
	return std::to_string(_float);
}

std::string conv::s(long double _long_double)
{
	return std::to_string(_long_double);
}

std::string conv::s(System::Decimal dec)
{
	// System::Decimal to std::string
	return std::to_string(decToInt(dec));
}



System::String^ conv::cs(std::string str)
{
	// std::string to System::String
	return gcnew System::String(str.c_str());
}
