#pragma once
#include <ostream>
#include <cmath>
using namespace std;
/*
* \breif класс Vector
*/
class Vector
{
private:
	/*
	* \breif стороны вектора
	*/
	double x;
	double y;
public:
	/*
	* \breif конструктор с параметрами
	*/
	Vector(const double x,const double y)
	{
		this->x = x;
		this->y = y;
	}
	/*
	* \breif коструктор копирования
	*/
	Vector(const Vector& these, const Vector& other) {}
	/*
	* \breif деструктор по умочанию
	*/
	~Vector() = default;
	/*
	* \brief перегруженный опретора сложения возвращаю сумму двух векторов
	*/
	friend Vector operator+(const Vector& A, const Vector& B);
	/*
	* \breif перегруженынй опреатор вычитания возвращающий разницу веторов
	*/
	friend Vector operator-(const Vector& A, const Vector& B);
	/*
	* \breif перегруженный опреатор вывода выводящий общую информацию о векторе
	*/
	friend ostream& operator<<(ostream& os, const Vector& obj);
	/*
	* \breif перегруженынй опреатор умножения возвращающий скалярное произведение 
	*/
	friend double operator*(const Vector& A, const Vector& B);
	/*
	* \breif сеттеры координат вектора
	*/
	void set_x(const double x)
	{
		this->x = x;
	}
	void set_y(const double y)
	{
		this->y = y;
	}
	/*
	* \breif геттеры координат
	*/
	double get_x() const;
	double get_y() const;
	/*
	* \breif длинна вектора
	*/
	double lenght() const;


};