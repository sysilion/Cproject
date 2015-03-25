/*
 * binary1.c
 *
 *  Created on: 2015. 3. 23.
 *      Author: Administrator
 */

#include "search.h"

void binary1(){
	extern int *input;
	int i, x, size, search_data, result;

	// input array size
	extern int data_size;
	// random data set variable
	extern double factor;

	// time check variable
	float Time = 0;
	BOOL err;

	CHECK_TIME_START;

	for (x = 0; x < LOOP_COUNT; x++){
		search_data = (int)(rand()*factor)%data_size + 1;

		result = Binary_Search(input, 0, data_size, search_data);

		if (result == -1){
//			printf("Can't find %d in input data array.\n", search_data);
		} else{
			if(x%(LOOP_COUNT/10) == 0) printf("*");
//			printf("Search Result --> input[%d] : %d\n", result, search_data);
		}
	}

	CHECK_TIME_END(Time, err);

	printf(" Calc Time = %.6fms\n", Time/LOOP_COUNT);

}

int Binary_Search(int array[], int lower, int upper, int search_data){
	int mid;

	if (lower == upper){
		if (search_data == array[lower]){
			return lower;
		} else {
			return -1;
		}
	} else {
		mid = floor((lower + upper) / 2);
		if (search_data > array[mid]){
			return Binary_Search(array, mid+1, upper, search_data);
		} else {
			return Binary_Search(array, lower, mid, search_data);
		}
	}
}
