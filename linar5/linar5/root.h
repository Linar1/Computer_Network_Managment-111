#pragma once
#include "myexeption.h"
#include <cmath>
#include <ostream>
/*
* \brief Класса для вычесления корней квадратного уравнения
*/
class root
{
private:
	/*
	* brief коэф линейного уравнения
	*/
	double a;
	double b;
public:
	/*
	* \brief Конструктор с коэф уравнения
	*/
	root(const double a, const double b)
	{
		this->a = a;
		this->b = b;
	}
	~root() = default;
	/*
	* Геттер для корня уравнения
	*/
	double get_root() const;
	/*
	* \brief Функция без спецификации исключений
	*/
	double noexep() const;
	/*
	* \brief Функция со спецификацией throw();
	*/
	double with_thow() throw();
	/*
	* \brief Функция с конкретной спецификацией с подходящим стандартным исключением
	*/
	double invalid_throw() throw(invalid_argument);
	/*
	* \brief спецификация с собственным реализованным исключением: как пустой клас
	*/
	double empty() throw(empty_exeption);
	/*
	* \brief спецификация с собственным реализованным исключением: как независимый класс с полями-параметрами функции
	*/
	double my_exp1() throw(my_exeption1);
	/*
	* \brief спецификация с собственным реализованным исключением: как наследник от стандартного исключения с полями
	*/
	double my_exp2() throw(my_exeption2);
	/*
	* \breif сравнение для типа double
	*/
	bool double_compare(const double value_a, const double value_b) const;
};
