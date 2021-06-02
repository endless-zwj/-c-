#include"Date.h"

int main() {
	Date d1(2020, 2, 22);
	Date d2 = d1 + 10;
	d1.Print();
	d2.Print();
	d1 += 10;
	d1.Print();
	system("pause");
	return 0;
}