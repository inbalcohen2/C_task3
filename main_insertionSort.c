

#include <stdio.h>
#include "insertion_sort.h"
#define SIZE_OF_ARRAY 50
//#include "merge_sort.h"

// int main()
// {
//     int arr[] = { 12, 11, 13, 5, 6 };
//     int n = sizeof(arr) / sizeof(arr[0]);

//     insertion_sort(arr, n);
//    f_printArray(arr, n);
//     int arr2[] = {0,1,2,3,4,5 };
//      f_printArray(arr2, 6);
//     shift_element(arr2+2 , 2);
// 	 n = sizeof(arr2) / sizeof(arr2[0]);
//     f_printArray(arr2, n);
//     return 0;
// }



int main()
{
	int arr[SIZE_OF_ARRAY];
	for(int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		int x = 0;
		scanf("%d",&x);
		*(arr+i) = x;
	}

	insertion_sort(arr,SIZE_OF_ARRAY);
	for(int i = 0; i < SIZE_OF_ARRAY-1; i++)
	{
		printf("%d,",*(arr+i));
	}
	printf("%d\n",*(arr+SIZE_OF_ARRAY-1));

	return 0;
}
