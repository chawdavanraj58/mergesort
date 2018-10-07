#include<iostream>
#include<conio.h>

using namespace std;

class data1
{
	int *arr;
	int size;
public:
	data1(int size);
	void insert(int loc,int num);
	void mergesort(int left, int right);
	void merge(int, int, int, int);
	void display();
};