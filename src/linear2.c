/*
 * linear2.c
 *
 *  Created on: 2015. 3. 19.
 *      Author: Administrator
 */

#include "search.h"

void linear2() {
	extern int *input;
	int i, x, search_data;

	// random data set variable
	extern double factor;

	// array size variable
	extern int data_size;

	// time check variable
	float Time = 0;
	BOOL err;

	CHECK_TIME_START;

	for (x = 0; x < LOOP_COUNT; x++){
		search_data = (int)(rand()*factor)%data_size + 1;

		for (i = 0; i < data_size; i++){
			if (search_data == input[i]) {
				if(x%(LOOP_COUNT/10) == 0) printf("*");
//				printf("Search Complete --> input[%d] : %d\n", i, search_data);
				break;
			}
		}
	}

	CHECK_TIME_END(Time, err);

	printf(" Calc Time = %.6fms\n", Time/LOOP_COUNT);
}
