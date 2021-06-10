#include "root.h"
bool root::double_compare(const double value_a, const double value_b) const
{
	return abs(value_a - value_b) <= numeric_limits<double>::min();
}
double root::get_root() const { return (-b / a); }
double root::noexep() const { return get_root(); }
double root::with_thow() throw() { return get_root(); }
double root::invalid_throw() throw(invalid_argument)
{
	if (double_compare(a,0))
		throw invalid_argument("деление на ноль!!!");
	return get_root();
}
double root::empty() throw(empty_exeption)
{
	if (double_compare(a, 0))
		throw empty_exeption();
	return get_root();
}double root::my_exp1() throw(my_exeption1)
{
	if (double_compare(a, 0))
		throw my_exeption1("деление на ноль!!!");
	return get_root();
}
double root::my_exp2() throw(my_exeption2)
{
	if (double_compare(a, 0))
		throw my_exeption2("неверный аргумент =", a);
	return get_root();
}