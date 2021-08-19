#include "Sorting.h"
// after making some searches I found that all of bubble sort , insertion sort and Selection Sort have worst case of O(N^2)
// but bubble and insertion has best case of O(N)
// and all of them have space complexity of O(1)
// so i choose to implement Bubble sort
/*
 *[Function name]:bubbleSort
 *[description]: responsible for sorting array in ascending order
 */
void bubbleSort(sint8 *Arr, uint8 Size) {
	for (uint8 j = 0; j < Size - 1; j++)
		for (uint8 i = 0; i < Size - 1; i++) {
			if (Arr[i + 1] < Arr[i])
				Swap_fun(&Arr[i], &Arr[i + 1]);

		}
}
/*
 *[Function name]:Swap_fun
 *[description]: responsible for swap 2 elements by reference
 */
void Swap_fun(sint8 *first, sint8 *second) {
	sint8 temp;

	// Value of first is assigned to temp
	temp = *first;

	// Value of second is assigned to first
	*first = *second;

	// Value of temp (initial value of first) is assigned to second
	*second = temp;
}
/*
 *[Function name]:isSorted
 *[description]: responsible for check if array is sorted or not , return 1 if sorted and -1 if not
 */
sint8 isSorted(sint8 *Arr, uint8 Size) {
	for (uint8 j = 0; j < Size - 1; j++) {
		if (Arr[j] > Arr[j + 1])
			return -1;

	}
	return 1;
}
