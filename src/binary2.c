/*
 * binary2.c
 *
 *  Created on: 2015. 3. 23.
 *      Author: Administrator
 */

#include "search.h"

void binary2(){
	extern int *input;
	int i, x, size, search_data;

	// input array size
	extern int data_size;
	// random data set variable
	extern double factor;

	int lower, upper, mid, result = -1;

	// time check variable
	float Time = 0;
	BOOL err;

	CHECK_TIME_START;

	for (x = 0; x < LOOP_COUNT; x++){
		search_data = (int)(rand()*factor)%data_size + 1;

		lower = 0;
		upper = data_size;

		while(lower <= upper){
			mid = floor((lower + upper) / 2);
			if (input[mid] == search_data){
				result = mid;
				break;
			} else if (input[mid] < search_data){
				lower = mid + 1;
			} else if (input[mid] > search_data){
				upper = mid - 1;
			} else {
				result = -1;
				break;
			}
		}
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
