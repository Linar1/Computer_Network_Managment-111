#pragma once
#include "Point.h"
#include <cmath>
/*
* \breif дочерний класс окружность
*/
class Circle : public Point
{
private:
public:
	/*
	* \breif конструктор с параметрами
	* \param [in] Радиус окружности
	*/
	Circle(const double r);
	/*
	* \brief конструктор копирования
	*/
	Circle(Circle& other) : Point(other){}
	/*
	* \breif дистркутор по умолчанию
	*/
	virtual ~Circle() = default;
	/*
	* \breif перегруженный оператор для вывода информации
	*/
	friend ostream& operator<<(ostream& os, const Circle& obj);
	/*
	* \breif сеттер радиуса
	*/
	void set_x(const double r) override;
	/*
	* \brief геттер раидуса
	*/
	double get_r() const;
	/*
	* \breif длина окружности
	*/
	double ring() const;
	/*
	* \breif площадь окружности
	*/
	double square() const;
};
