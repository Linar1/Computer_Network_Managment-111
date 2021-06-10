#pragma once
#include <ostream>
using namespace std;
class Point
{
private:
	/*
	* \breif координаты и константа
	*/
	double x;
	double y;
	const double pi = 3.14159265358979323846;
public:
	/*
	* \breif конструктор с параметрами
	*/
	Point(const double x, const double y)
	{
		this->x = x;
		this->y = y;
	}
	/*
	* \breif конструктор копирования
	*/
	Point(Point& other) = default;
	/*
	* \breif деструктор по умолчанию
	*/
	~Point() = default;
	/*
	* \breif функция вывода
	*/
	friend ostream& operator<<(ostream& os, const Point& obj);
	/*
	* \breif сеттеры координат
	*/
	virtual void set_x(const double x)
	{
		this->x = x;
	}
	virtual void set_y(const double y)
	{
		this->y = y;
	}
	/*
	* \breif геттеры координат и константы пи
	*/
	double get_x() const;
	double get_y() const;
	double get_pi() const;
	/*
	* \breif начало координат
	*/
	double begin() const;
protected:
	/*
	* \breif конструктор по умолчанию
	*/
	Point() = default;
};