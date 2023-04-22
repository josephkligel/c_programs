#include <stdio.h>
#include "arrayFunctions.h"

void main(void){
	int arr_i[5] = {1, 2, 3, 5, 6};
	char arr_c[3] = {'a', 'b', 'c'};

	printf("Size of int array using array_size function: %d\n", array_size(arr_i));
	printf("Size of int array: %d\n", int_array_size(arr_i));
	printf("Size of character array: %d\n", char_array_size(arr_c));	
}
