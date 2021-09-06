#ifndef SORTING_H_INCLUDED
#define SORTING_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "TypeDefs.h"
#define Unsorted -1
#define Sorted 1
void Swap_fun(sint8 *first,sint8 *second);
void bubbleSort(sint8 *Arr,uint8 Size);
sint8 isSorted(sint8 *Arr,uint8 Size);

#endif // SORTING_H_INCLUDED
