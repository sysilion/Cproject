/*
 * linear2.c
 *
 *  Created on: 2015. 3. 19.
 *      Author: Administrator
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void linear2() {
	int *input;
	int i, size, search_data;

	printf("input Array size (exponentiation of 2) :");
	scanf("%d", &size);

	input = (int *)malloc(sizeof(int) * (int)pow(2,size));

	for (i = 0; i < (int)pow(2,size); i++){
		input[i] = i+1;
	}

	// Randomize data %(int)pow(2,size)+1 ( 1~2^arraysize )
	srand(time(NULL));
	search_data = rand()%(int)pow(2,size) + 1;

	for (i = 0; i < (int)pow(2,size); i++){
		if (search_data == input[i]) {
			printf("Search Complete --> input[%d] : %d", i, search_data);
			break;
		}
	}
}
