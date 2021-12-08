#pragma once
#include "func.h"
/*
* \breif Класс наследник  гипер косинус
*/
class Cos : public func
{
private:
	/*
	* \breif параметры класса
	*/
	double x;
public:
	/*
	* \breif конструктор с параметрами
	*/
	Cos(const double x) { this->x = x; }
	/*
	* \breif конструктор копирования по умолчанию
	*/
	Cos(Cos& other) = default;
	/*
	* \breif Деструктор по умолчанию
	*/
	~Cos() = default;
	/*
	* \breif перегруженный оператор вывода
	*/
	friend ostream& operator<<(ostream& os, const Cos& obj);
	/*
	* \breif функция вычисляющая геом. функцию гипер косинуса
	*/
	double function() const override;
	/*
	* \breif функция вычисляющая производную гипер косинуса
	*/
	double derivative() const override;
};