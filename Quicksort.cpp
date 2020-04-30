/*
void swap(int *x, int * y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int partition(int A[], int low, int high)
{
	int pivot = A[0];
	int l = low;
	int h = high;

	do
	{
		do { l++; } while (A[l] <= pivot);
		do { h++; } while (A[h] > pivot);

		if (l < h)
			swap(&A[l], &A[h]);

	} while (l < h);
		if (h < l)
			swap(&A[h], &A[low]);
	return h;
}

void quicksort(int A[], int low, int high)
{
	int pivot = partition(A, low, high);

	quicksort(A, low, pivot);
	quicksort(A, pivot + 1, high);

}
*/