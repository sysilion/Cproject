/*
 * linear1.c
 *
 *  Created on: 2015. 3. 19.
 *      Author: Administrator
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


void linear1() {
	int *input;
	int result, i, size, search_data;

	printf("input Array size (exponentiation of 2) :");
	scanf("%d", &size);

	input = (int *)malloc(sizeof(int) * (int)pow(2,size));

	for (i = 0; i < (int)pow(2,size); i++){
		input[i] = i+1;
	}

	// Randomize data %(int)pow(2,size)+1 ( 1~2^arraysize )
	srand(time(NULL));
	search_data = rand()%(int)pow(2,size) + 1;

	result = Linear_Search(input, 0, sizeof(input)/4, search_data);

	printf("Search Complete --> input[%d] : %d", result, search_data);

}

int Linear_Search(int array[], int low, int high, int data) {

	if (low >= high) { return -1; }
	else if (array[low] == data){ return low; }
	else { return Linear_Search(array, low+1, high, data); }

}
