#include "Circle.h"
ostream& operator<<(ostream& os, const Circle& obj)
{
	return os << "Радиус окружности = " << obj.get_r() << ";" << "\n"
		<< "Длинна окружности = " << obj.ring() << ";" << "\n"
		<< "Площадь окружности = " << obj.square() << ";";
}
Circle::Circle(const double r)
{
	if (!r > 0) throw("Окружность вырожденна");
	::Point::set_x(r);
}
void Circle::set_x(const double r)
{
	if (!r > 0) throw("Окружность вырожденна");
	::Point::set_x(r);
}
double Circle::get_r() const { return get_x(); }
double Circle::ring() const { return 2 * get_pi() * get_r(); }
double Circle::square() const { return get_pi() * pow(get_r(), 2); }