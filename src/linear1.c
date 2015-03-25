/*
 * linear1.c
 *
 *  Created on: 2015. 3. 19.
 *      Author: Administrator
 */

#include "search.h"

void linear1() {
	extern int *input;
	int result, i, search_data;

	// input array size
	extern int data_size;
	// random data set variable
	extern double factor;

	// time check variable
	float Time = 0;
	BOOL err;

	CHECK_TIME_START;

	for (i = 0; i < LOOP_COUNT; i++){
		search_data = (int)(rand()*factor)%data_size + 1;

		result = Linear_Search(input, 0, data_size, search_data);

		if(i%(LOOP_COUNT/10) == 0) printf("*", result);
//		printf("Search Complete --> input[%d] : %d\n", result, search_data);

	}

	CHECK_TIME_END(Time, err);

	printf(" Calc Time = %.6fms\n", Time/LOOP_COUNT);

}

int Linear_Search(int array[], int low, int high, int data) {
	if (low >= high) { return -1; }
	else if (array[low] == data){ return low; }
	else { return Linear_Search(array, low+1, high, data); }
}
