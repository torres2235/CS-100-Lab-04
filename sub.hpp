#ifndef __SUB_HPP__
#define __SUB_HPP__

class Sub : public Base {
	private:
		double result;
		std::ostringstream stream;
	public:
		Sub(double value1, double value2) : Base() {result = value1 - value2; }
		virtual double evaluate() { return result;}
		virtual std::string stringify() { stream << result; return stream.str(); }

};

#endif //__SUB_HPP__
