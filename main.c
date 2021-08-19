#include "BinarySearch.h"
#define Size 5
void printArray(sint8 *Arr, uint8 S);
int main() {
	printf("enter key you want to search for : ");
	uint8 key;
	scanf("%c", &key);
	sint8 Arr[Size] = { 1, 2, 3, 4, 5 };
	printArray(Arr, Size);
	if (isSorted(Arr, Size) == -1) // if array isn't sorted sort it using bubble sort
			{
		bubbleSort(Arr, Size);
		printf("printing array after sorting it\n");
		printArray(Arr, Size);
	}

	sint8 index = binarySearch(Arr, Size - 1, 0, key); //return index of key searching for
	if (index == -1) // return -1 if not found
		printf("key not found");
	else
		printf("key found at index : %d", index);

	return 0;
}
/*
 *[Function name]:printArray
 *[description]: responsible for printing element in array
 */
void printArray(sint8 *Arr, uint8 S) {
	printf("Printing array :\n");
	for (uint8 i = 0; i < S; i++)
		printf("at index %d : %d\n", i, Arr[i]);
}
