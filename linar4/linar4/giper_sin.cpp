#include "giper_sin.h"
ostream& operator<<(ostream& os, const Sin& obj)
{
	return os << "Значение функции = " << obj.function() << ";" << "\n" << "Значание производной =" << obj.derivative() << ";";
}
double Sin::function() const { return ((exp(x) - exp(-x)) / 2); }
double Sin::derivative() const { return ((exp(x) + exp(-x)) / 2); }