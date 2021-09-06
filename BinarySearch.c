#include "BinarySearch.h"
#include <math.h>
/*
 *[Function name]:binarySearch
 *[description]: responsible for search for key element in array
 */
sint8 binarySearch(sint8 *Arr, sint8 last, sint8 first, sint8 key) {
	if (last < first) // key Not found
		return KeyNotFound;
	sint8 mid = (first + (last)) / 2;
	//printf("mid = %d \n",mid);
	if (Arr[mid] == key) // element found
		return mid;
	if (Arr[mid] > key) // element smaller that mid then make start as it is and last as m-1 , divide array
		return binarySearch(Arr, mid - 1, first, key);
	else
		// element larger that mid then make start as mid+1 and last as it is , divide array
		return binarySearch(Arr, last, mid + 1, key);

}
