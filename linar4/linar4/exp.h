#pragma once
#include "func.h"
/*
* \breif Класс наследник exp
*/
class Exp : public func
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
	Exp(const double x) { this->x = x; }
	/*
	* \breif конструктор копирования по умолчанию
	*/
	Exp(Exp& other) = default;
	/*
	* \breif Деструктор по умолчанию
	*/
	~Exp() = default;
	/*
	* \breif перегруженный оператор вывода
	*/
	friend ostream& operator<<(ostream& os, const Exp& obj);
	/*
	* \breif функция вычисляющая геом. функцию exp
	*/
	double function() const override;
	/*
	* \breif функция вычисляющая производную exp
	*/
	double derivative() const override;
};