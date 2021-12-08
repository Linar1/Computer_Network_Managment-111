#include "giper_cos.h"
ostream& operator<<(ostream& os, const Cos& obj)
{
	return os << "Значение функции = " << obj.function() << ";" << "\n" << "Значание производной =" << obj.derivative() << ";";
}
double Cos::function() const { return ((exp(x) + exp(-x))/2); }
double Cos::derivative() const { return ((exp(x) - exp(-x)) / 2); }