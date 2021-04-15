#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"

class Mult : public Base {

private:
        double value1;
	double value2;

public:
        Mult(Base* para1, Base* para2) : Base() {
		value1 = para1->evaluate();
		value2 = para2->evaluate();
	 }
        virtual double evaluate() { return (value1 * value2); }
        virtual std::string stringify() { return std::to_string(value1 * value2); }
};

#endif
