#include "Vector.h"
#include <iostream>
void main() 
{
	setlocale(LC_ALL, "ru");
	Vector a(5, 4);
	Vector b(5, 4);
	Vector c = a + b;
	double ab = a * b;
	cout << c << "\n";
	cout <<"Скалярное произведение "<< ab << "\n";
	cout << a.lenght()<< "\n";
	cout << a;
}