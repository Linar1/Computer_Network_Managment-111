#include "Circle.h"
#include "Point.h"
#include <iostream>
void main()
{
	setlocale(LC_ALL, "ru");
	Point a(1, 2);
	cout << a << "\n";
	Circle b(3);
	cout << b;
}