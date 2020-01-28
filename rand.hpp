#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"

class Rand : public Base {
    private:
        double num;
    public:
        Rand() : Base() {num = rand() % 100; }
        virtual double evaluate () {return num;}
        virtual std::string stringify() {return ""; }
};

#endif //__RAND_HPP__
