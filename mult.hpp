#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"
#include <sstream>

class Mult : public Base {
    private:
        double val1, val2, result;
        std::ostringstream stream;
    public:
        Mult(double value1, double value2) : Base() {val1 = value1; val2 = value2; result = value1 * value2; }
        virtual double evaluate() { return result; }
        virtual std::string stringify() {stream << val1 << "*" << val2; return stream.str(); }
};

#endif //__MULT_HPP__
