#include <stdio.h>

int array_size(int *array){
	int size = 0;
	while(array != NULL){
		++size;
		++array;
	}
	return size;
}

int int_array_size(int *array){
	int size = sizeof(array)/sizeof(array[0]);
	return size;
}

int char_array_size(char *array){
	int size = sizeof(array)/sizeof(char);
	return size;
}
