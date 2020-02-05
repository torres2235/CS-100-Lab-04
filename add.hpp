#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"
#include <sstream>

class Add : public Base {
	private:
		double result;
		std::ostringstream stream;
	public:
		Add(double value1, double value2) : Base() { result = value1 + value2; }
		virtual double evaluate() { return result;}
		virtual std::string stringify() { stream << result; return stream.str(); }

};

#endif //__ADD_HPP__
