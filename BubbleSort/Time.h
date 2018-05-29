#pragma once
#include "Library.h"

class Time {
	int m_Hours;
	int m_Minutes;
	int m_Seconds;


public:


	Time() // конструктор по умолчанию который 
	{
		m_Hours = 0;
		m_Minutes = 0;
		m_Seconds = 0;
	}


	Time(const int & hours,
		const int & minutes,
		const int & seconds) {
		m_Hours = hours;
		m_Minutes = minutes;
		m_Seconds = seconds;


	}
	void ShowTime() {
		cout << m_Hours << " : " << m_Minutes << " : " << m_Seconds << endl;
	}


	// префиксная форма
	int operator++() {
		return (*this).m_Seconds++;
	}


	int operator--() {
		return (*this).m_Seconds--;
	}


	// постфиксная форма
	int operator++(int) {
		return ++(*this).m_Seconds;
	}


	int operator--(int) {
		return --(*this).m_Seconds;
	}


	ostream & operator << (ostream & out) {
		cout << "\nFrom overload << operator: ";
		out << (*this).m_Hours << ":" << (*this).m_Minutes << ":" << (*this).m_Seconds;
		return out;
	}


	istream & operator >> (istream & in) {
		cout << "\nEnter hours: ";
		cin >> (*this).m_Hours;
		cout << "Enter minutes: ";
		cin >> (*this).m_Minutes;
		cout << "Enter secods: ";
		cin >> (*this).m_Seconds;
		return in;
	}


};