#pragma once
#include<iostream>
#include<windows.h>

using std::cout;
using std::cin;
using std::endl;

class  Date {
public:
	//默认构造函数
	Date(int year = 0, int month = 0, int day = 0);
	//拷贝构造函数
	Date(const Date& other);
	//赋值构造函数
	Date& operator=(const Date& other);
	//析构函数
	~Date();

	//实现打印日期
	void Print();
	//获得每个月的天数
	int getMonthDay(int year, int month);
	//实现日期加天数(该变对象本身)--重载"+="运算符
	Date& operator+=(int day);
	//实现日期加天数(不改变对象本身)--重载"+"运算符 
	Date operator+ (int day);


private:
	int _year;
	int _month;
	int _day;
};

