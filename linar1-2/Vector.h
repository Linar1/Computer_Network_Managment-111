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
	* \breif кординаты вектора
	*/
	double x;
	double y;
public:
	/*
	* \breif конструктор с параметрами
	* \param [in] координата X
	* \param [in] координата Y
	*/
	Vector(const double x, const double y);
	/*
	* \breif деструктор по умочанию
	*/
	~Vector() = default;
	/*
	* \brief перегруженный опретора сложения возвращаю сумму двух векторов
	* \param [in] вектор 1
	* \param [in] вектор 2
	* \param [out] сумма векторов
	*/
	friend Vector operator+(const Vector& lhs, const Vector& rhs);
	/*
	* \breif перегруженынй опреатор вычитания возвращающий разницу веторов
	* \param [in] вектор 1
	* \param [in] вектор 2
	* \param [out] разность векторов
	*/
	friend Vector operator-(const Vector& lhs, const Vector& rhs);
	/*
	* \breif перегруженный опреатор вывода выводящий общую информацию о векторе
	*/
	friend ostream& operator<<(ostream& os, const Vector& obj);
	/*
	* \breif перегруженынй опреатор умножения возвращающий скалярное произведение 
	* \param [in] вектор 1
	* \param [in] вектор 2
	* \param [out] произведение векторов
	*/
	friend double operator*(const Vector& lhs, const Vector& rhs);
	/*
	* \breif сеттер координаты X
	* \param [in] координата X
	*/
	void set_x(const double x);
	/*
	* \breif сеттер координаты Y
	* \param [in] координата Y
	*/
	void set_y(const double y);
	/*
	* \breif геттер координаты X
	* \param [out] координата X
	*/
	double get_x() const;
	/*
	* \breif геттер координаты Y
	* \param [out] координата Y
	*/
	double get_y() const;
	/*
	* \breif геттер длинны вектора
	* \param [out] длинна вектора
	*/
	double lenght() const;

};