#include <stdio.h>

void shift_element(int* arr, int i)
{
    while(i > 0)
    {
        *(arr + i) = *(arr + i - 1);
        i--;
    }
}
/*this function get len numbers to sort an array using insertion sort*/
void insertion_sort(int* arr, int len){

    int i, key, j; 
    for (i = 1; i < len; i++) { 
      
       key = *(arr + i);
        j = i - 1;
  
        /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */

  while (j >= 0 && *(arr + j) > key)
        {
            *(arr + j + 1) = *(arr + j); // shift right
            j= j-1;
        }
        *(arr + j + 1) = key;
        //arr[j + 1] = key;
    }
}



// void f_printArray(int arr[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//         printf("%d,  ", arr[i]);
//         printf("\n");
// }


