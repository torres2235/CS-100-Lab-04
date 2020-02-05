#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <sstream>
#include <cmath>

class Pow : public Base {
    private:
        double val1, val2, result;
        std::ostringstream stream;
    public:
        Pow(double value1, double value2) : Base() {val1 = value1; val2 = value2; result = pow(value1, value2); }
	virtual double evaluate() {return result; }
	virtual std::string stringify() {stream << val1 << "**" << val2; return stream.str(); }
};

#endif //__POW_HPP__
