#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"
#include <sstream>

class Div : public Base {
	private:
		double val1, val2, result;
		double zero = 0;
		std::ostringstream stream;
	public:
		Div(double value1, double value2) : Base() {val1 = value1; val2 = value2; result = value1 / value2; }
		virtual double evaluate() { if (val2 == zero) { return zero; } return result; }
		virtual std::string stringify() { stream << val1 << "/" << val2; return stream.str(); }

};

#endif //__DIV_HPP__
