/*
 * jump.c
 *
 *  Created on: 2015. 3. 19.
 *      Author: Administrator
 */

#include "search.h"

void jump(){
	extern int *input;
	int i, x, search_data, index = 0;

	// input array size
	extern int data_size;
	double sqrt_data_size = sqrt(data_size);
	// random data set variable
	extern double factor;

	// time check variable
	float Time = 0;
	BOOL err;

	// increse rand max number. using factor!!

	CHECK_TIME_START;

	for (x = 0; x < LOOP_COUNT; x++){
		search_data = (int)(rand()*factor)%data_size + 1;

		for (i = 0; i < sqrt_data_size; i++) {
			if(search_data <= i * sqrt_data_size) {
				index = --i * sqrt_data_size;
				break;
			}
		}

		for (i = index; i < data_size; i++){
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
