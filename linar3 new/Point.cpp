#include "Point.h"
ostream& operator<<(ostream& os, const Point& obj)
{
	return os << "Координаты точки(" << obj.x << "," << obj.y << ");" << "\n" << "Растояние до начала координат = " << obj.to_origin() << ";";
}
double Point::get_x() const { return x; }
double Point::get_y() const { return y; }
double Point::to_origin() const { return sqrt((pow(get_x(), 2) + pow(get_y(), 2))); }
double Point::get_pi() const { return pi; }