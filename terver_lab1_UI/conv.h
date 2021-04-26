#pragma once
#include <string>


public ref struct conv
{
	static int decToInt(const System::Decimal& dec);

	static std::string s(System::String^ str);
	static std::string s(int _int);
	static std::string s(size_t _size_t);
	static std::string s(float _float);
	static std::string s(double _double);
	static std::string s(long double _long_double);
	static std::string s(System::Decimal dec);

	static System::String^ cs(std::string str);
};

