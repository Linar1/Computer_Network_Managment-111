#include "exp.h"
ostream& operator<<(ostream& os, const Exp& obj)
{
	return os << "Значение функции = " << obj.function() << ";" << "\n" << "Значание производной =" << obj.derivative() << ";";
}
double Exp::function() const { return exp(x); }
double Exp::derivative() const { return exp(x); }