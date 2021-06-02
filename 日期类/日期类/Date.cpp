#include "Date.h"


Date::Date(int year, int month, int day) {
	cout << "����Ĭ�Ϲ��캯��" << endl;
	this->_year = year;
	this->_month = month;
	this->_day = day;
}

Date::Date(const Date& other) {
	cout << "���ø�ֵ���캯��" << endl;
	this->_day = other._day;
	this->_month = other._month;
	this->_year = other._year;
}

Date& Date::operator=(const Date& other) {
	cout << "���ø�ֵ���캯��" << endl;
	this->_day = other._day;
	this->_month = other._month;
	this->_year = other._year;

	//����ʵ��������ֵ
	return *this;
}

Date::~Date() {
	cout << "������������" << endl;
}

void Date::Print() {
	cout << _year << "-" << _month << "-" << _day<< endl;
}

inline int Date::getMonthDay(int year, int month) {
		//���뾲̬��,ÿ�ε��ò����ظ�����.
		static  int Day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		int day = Day[month];
		if (month == 2 && (year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			day += 1;

		return day;
}

Date& Date::operator+= (int day) {
	this->_day += day;
	while (_day > getMonthDay(this->_year, this->_month)) {
		this->_day -= getMonthDay(this->_year, this->_month);
		this->_month += 1;
		if (this->_month == 13) {
			this->_year += 1;
			this->_month = 1;
		}
	}
	return *this;
}

Date Date::operator+ (int day) {
	Date ret = *this;
	ret += day;

	//����һ����ʱ����(����һ�ο������캯��)
	return ret;
}


