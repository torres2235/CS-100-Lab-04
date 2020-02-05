#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"
#include <sstream>

class Add : public Base {
	private:
		double val1, val2, result;
		std::ostringstream stream;
	public:
		Add(double value1, double value2) : Base() { val1 = value1; val2 = value2; result = value1 + value2; }
		virtual double evaluate() { return result;}
		virtual std::string stringify() { stream << val1 << "+" << val2; return stream.str(); }

};

#endif //__ADD_HPP__
