#include "Header.h"

data1::data1(int size)
{
	this->size = size;
	arr[size] = NULL;
}



void data1::insert(int loc,int num)
{
	arr[loc] = num;
}

void data1::mergesort(int left,int right)
{
	if (left >= right)
		return;

	int mid = left + right / 2;
	mergesort(left, mid);
	mergesort(mid + 1, right);
	merge(left, mid, mid + 1, right);
}

void data1::merge(int left, int LeftEnd, int Right, int RightEnd)
{
	int temp[10];
	int v = left;
	while (left <= LeftEnd && Right <= RightEnd)
	{
		if (arr[left] > arr[Right])
		{
			temp[v] = arr[Right];
			Right++;
			v++;
		}

		if (arr[Right] > arr[left])
		{
			temp[v] = arr[left];
			left++;
			v++;
		}
	}

	if (left != LeftEnd)
	{
		while (left != LeftEnd)
		{
			temp[v] = arr[left];
			left++;
			v++;
		}
	}

	if (Right != RightEnd)
	{
		while (Right != RightEnd)
		{
			temp[v] = arr[Right];
			Right++;
			v++;
		}
	}
	
	v = left;
	while (v != RightEnd)
	{
		arr[v] = temp[v];
		v++;
	}

}

void data1::display()
{
	int i = 0;
	while ( i != NULL)
	{
		cout << arr[i] << endl;
	}
}
