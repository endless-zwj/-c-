#pragma once
#include<iostream>
#include<windows.h>

using std::cout;
using std::cin;
using std::endl;

class  Date {
public:
	//Ĭ�Ϲ��캯��
	Date(int year = 0, int month = 0, int day = 0);
	//�������캯��
	Date(const Date& other);
	//��ֵ���캯��
	Date& operator=(const Date& other);
	//��������
	~Date();

	//ʵ�ִ�ӡ����
	void Print();
	//���ÿ���µ�����
	int getMonthDay(int year, int month);
	//ʵ�����ڼ�����(�ñ������)--����"+="�����
	Date& operator+=(int day);
	//ʵ�����ڼ�����(���ı������)--����"+"����� 
	Date operator+ (int day);


private:
	int _year;
	int _month;
	int _day;
};

