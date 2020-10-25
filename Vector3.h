#ifndef VECTOR3_H
#define VECTOR3_H // VECTOR3_H

#include <iostream>

#define M_PI           3.14159265358979323846  /* pi */

template <class T>
class Vector3
{
	public:
		Vector3();
		Vector3(const T &xParam, const T &yParam, const T &zParam);
		Vector3(const Vector3 &b);

		void show();
		void Normalize();
		T distance_to(const Vector3 &b) const;
		T dot_product(const Vector3 &b) const;
		Vector3<T> cross_product(const Vector3 &b) const;
		T angle_between(const Vector3 &b) const;

		Vector3<T> operator+(const Vector3 &b);

private:
	T toDegree(T radian) const;

	public:
		T x;
		T y;
		T z;
};

template<class T>
inline Vector3<T>::Vector3()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

template<class T>
inline Vector3<T>::Vector3(const T& xParam, const T& yParam, const T& zParam)
{
	x = xParam;
	y = yParam;
	z = zParam;
}

template<class T>
inline Vector3<T>::Vector3(const Vector3& b)
{
	x = b.x;
	y = b.y;
	z = b.z;
}

template<class T>
inline void Vector3<T>::show()
{
	std::cout << "(" << x << "," << y << "," << z << ")" << std::endl;
}

template<class T>
inline void Vector3<T>::Normalize()
{
	T norm = (T) (sqrt(x * x + y * y + z * z));
	x = x / norm;
	y = y / norm;
	z = z / norm;
}

template<class T>
inline T Vector3<T>::distance_to(const Vector3& b) const
{
	return sqrt((x - b.x) * (x - b.x) + ( y - b.y) * (y - b.y) + (z - b.z) * (z - b.z));
}

template<class T>
inline T Vector3<T>::dot_product(const Vector3& b) const
{
	return x * b.x + y * b.y + z * b.z;
}

template<class T>
inline Vector3<T> Vector3<T>::cross_product(const Vector3& b) const
{
	return Vector3(
		y * b.z - z * b.y,
		z * b.x - x * b.z,
		x * b.y - y * b.x
	);
}

template<class T>
inline T Vector3<T>::angle_between(const Vector3& b) const
{
	T dotProduct = dot_product(b);
	T magnitudeA = sqrt(x * x + y * y + z * z);
	T magnitudeB = sqrt(b.x * b.x + b.y * b.y + b.z * b.z);
	return toDegree(acos(dotProduct / (magnitudeA * magnitudeB)));
}

template<class T>
inline Vector3<T> Vector3<T>::operator+(const Vector3& b)
{
	return Vector3(x + b.x, y + b.y, z + b.z);
}

template<class T>
inline T Vector3<T>::toDegree(T radian) const
{
	return radian * 180 / M_PI;
}


#endif