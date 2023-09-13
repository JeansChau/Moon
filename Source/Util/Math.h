#pragma once

namespace Moon
{
	template<template<typename> class Child, typename T>
	class Tupe2 
	{
	public:
		static const int nDimensions = 2;

		Tupe2() = default;

		Tupe2(T x, T y) : x(x), y(y){}

		template<typename U>
		decltype(T{} + U{}) operator+ (Child<U> c)
		{
			return {x + c.x, y + c.y};
		}

		template <typename U>
		Child<T>& operator+=(Child<U> c) 
		{
			x += c.x;
			y += c.y;
			return static_cast<Child<T> &>(*this);
		}

		template <typename U>
		auto operator-(Child<U> c) const->Child<decltype(T{} - U{}) > 
		{
			return { x - c.x, y - c.y };
		}

		template <typename U>
		Child<T>& operator-=(Child<U> c) {
			x -= c.x;
			y -= c.y;
			return static_cast<Child<T> &>(*this);
		}

		bool operator==(Child<T> c) const { return x == c.x && y == c.y; }
		
		bool operator!=(Child<T> c) const { return x != c.x || y != c.y; }

		template<typename U>
		Child<decltype(T{} * U{})> operator*(U s)
		{
			return {x * s, y * s};
		}

		template<typename U>
		Child<T>& operator*=(U s)
		{
			x *= s, y *= s;
			return static_cast<Child<T>&>(*this);
		}

		template<typename U>
		Child<decltype(T{} / U{})> operator/(U d) const
		{
			return {x / d, y / d};
		}

		template<typename U>
		Child<T>& operator/=(U d)
		{
			x /= d, y /= d;
			return static_cast<Child<T>&>(*this);
		}

		Child<T> operator-()const {return {-x, -y};}

		T& operator[](int i) const
		{
			return (i == 0) ? x : y;
		}

		T& operator[](int i)
		{
			return (i == 0) ? x : y;
		}

		T x{}, y{};
	};
}
