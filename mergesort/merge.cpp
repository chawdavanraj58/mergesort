#include "Header.h"

void main()
{
	data1 d1(10);
	d1.insert(0, 9);
	d1.insert(1, 8);
	d1.insert(2, 7);
	d1.insert(3, 6);
	d1.insert(4, 5);
	d1.insert(5, 6);
	d1.insert(7, 4);
	d1.insert(8, 3);
	d1.insert(9, 1);
	d1.insert(10, 10);
	d1.mergesort(0, 9);
	d1.display();
	_getch();
}
