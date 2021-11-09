#include "Vector.h"
Vector operator+(const Vector& lhs, const Vector& rhs)
{
	const auto x = lhs.x + rhs.x;
	const auto y = lhs.y + rhs.y;
	return Vector(x, y);
}
Vector operator-(const Vector& lhs, const Vector& rhs)
{
	const auto x = lhs.x - rhs.x;
	const auto y = lhs.y - rhs.y;
	return Vector(x, y);
}
ostream& operator<<(ostream&os, const Vector& obj)
{
	return os << "Координаты вектора:(" << obj.x << "," << obj.y << ");" << "\n" << "Длинна вектора = " << obj.lenght();
}
double operator*(const Vector& lhs, const Vector& rhs)
{
	return (lhs.x * rhs.x) + (lhs.y * rhs.y);
}
double Vector::get_x() const
{
	return x;
}
double Vector::get_y() const
{
	return y;
}
double Vector::lenght() const
{
	return sqrt(pow(x, 2) + pow(y, 2));
}
Vector::Vector(const double x, const double y)
{
	this->x = x;
	this->y = y;
}