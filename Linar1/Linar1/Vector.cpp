#include "Vector.h"
Vector operator+(const Vector& A, const Vector& B)
{
	Vector temp(0, 0);
	temp.x = A.x + B.x;
	temp.y = A.y + B.y;
	return temp;
}
Vector operator-(const Vector& A, const Vector& B)
{
	Vector temp(0, 0);
	temp.x = A.x - B.x;
	temp.y = A.y - B.y;
	return temp;
}
ostream& operator<<(ostream&os, const Vector& obj)
{
	return os << "Координаты вектора:(" << obj.x << "," << obj.y << ");" << "\n" << "Длинна вектора = " << obj.lenght();
}
double operator*(const Vector& A, const Vector& B)
{
	double temp;
	return temp = (A.x * B.x) + (A.y * B.y);
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