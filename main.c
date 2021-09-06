#include "BinarySearch.h"
#define Size 5
#define testCase 3
void printArray(sint8 *Arr, uint8 S);
int main() {
	uint8 key;

	// test case where array is sorted and key is in array
#if testCase == 1
	sint8 Arr[Size] = {1, 2, 3, 4, 5};
	printArray(Arr, Size);
	printf("enter key you want to search for : ");
	key=5;
	printf("%d \n",key);
#endif // testCase	// test case where array is sorted and key isn't in array
#if testCase == 2
	sint8 Arr[Size] = {1, 2, 3, 4, 5};
	printArray(Arr, Size);
	printf("enter key you want to search for : ");
	key=7;
	printf("%d \n",key);
#endif // testCase	// test case where array isn't sorted and key is in array
#if testCase == 3
	sint8 Arr[Size] = {7, 8, 3, 4, 5};
	printArray(Arr, Size);
	printf("enter key you want to search for : ");
	key=4;
	printf("%d \n",key);
#endif // testCase	// test case where array isn't sorted and user enter key
#if testCase == 4
	sint8 Arr[Size] = { 7, 8, 3, 4, 5 };
	printArray(Arr, Size);
	printf("enter key you want to search for : ");
	scanf("%d", &key);
#endif // testCase

	if (isSorted(Arr, Size) == Unsorted) // if array isn't sorted sort it using bubble sort
			{
		bubbleSort(Arr, Size);
		printf("printing array after sorting it\n");
		printArray(Arr, Size);
	}

	sint8 index = binarySearch(Arr, Size - 1, 0, key); //return index of key searching for
	if (index == KeyNotFound) // return -1 if not found
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
