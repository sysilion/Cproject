/*
 * jump.c
 *
 *  Created on: 2015. 3. 19.
 *      Author: Administrator
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>

#define CHECK_TIME_START __int64 freq, start, end; if (QueryPerformanceFrequency((LARGE_INTEGER*)&freq)) {QueryPerformanceCounter((LARGE_INTEGER*)&start);
#define CHECK_TIME_END(a,b) QueryPerformanceCounter((LARGE_INTEGER*)&end); a=(float)((double)(end - start)/freq*1000); b=TRUE; } else b=FALSE;

void jump(){
	int *input;
	int i, size, search_data, index = 0;
	double factor, max, min = 0.0;

	float Time;
	BOOL err;

	printf("input Array size (exponentiation of 2) : ");
	scanf("%d", &size);

	input = (int *)malloc(sizeof(int) * (int)pow(2,size));

	for (i = 0; i < (int)pow(2,size); i++){
		input[i] = i+1;
	}

	// Randomize data (int)(rand()*factor)%(int)pow(2,size)+1 ( 1~2^arraysize )
	max = pow(2, size); // set rand max size
	factor = (max - min) / RAND_MAX; // set rand max factor
	srand(time(NULL));
	search_data = (int)(rand()*factor)%(int)pow(2,size) + 1;

	// increse rand max number. using factor!!

	CHECK_TIME_START;

	for (i = 0; i < sqrt((int)pow(2,size)); i++) {
		if(search_data <= i*sqrt((int)pow(2,size))) {
			index = --i*sqrt((int)pow(2,size));
			break;
		}
	}

	for (i = index; i < (int)pow(2,size); i++){
		if (search_data == input[i]) {
			printf("Search Complete --> input[%d] : %d", i, search_data);
			break;
		}
	}

	CHECK_TIME_END(Time, err);

	printf("\n Calc Time = %.6fms", Time);

}
