#include "Searching.h"

int linearSearch(vector<int> arr, int key)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (key == arr[i])
		{
			return i;
		}
	}
	return -1;
}

int RBinarySearch(vector<int> arr, int low, int high, int key)
{
	int mid = 0;
	if (low <= high)
	{
		mid = floor(low + high) / 2;
		if (key == arr[mid])
		{
			cout << "found  ";
			return mid;
		}
		else if (key < arr[mid])
			RBinarySearch(arr, low, mid - 1, key);
		else
			RBinarySearch(arr, mid + 1, high, key);
	}
	return -1;
}

int BinarySearch(vector<int>arr, int key)
{
	int low = 0;
	int high = arr.size() - 1;
	int mid = 0;

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (key == arr[mid])
			return mid;
		else if (key < arr[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}