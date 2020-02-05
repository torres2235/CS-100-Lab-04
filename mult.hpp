#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"
#include <sstream>

class Mult : public Base {
    private:
        double result;
        std::ostringstream stream;
    public:
        Mult(double value1, double value2) : Base() {result = value1 * value2; }
        virtual double evaluate() { return result; }
        virtual std::string stringify() { stream << result; return stream.str(); }
};

#endif //__MULT_HPP__
