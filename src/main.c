/*
 * main.c
 *
 *  Created on: 2015. 3. 19.
 *      Author: Administrator
 */
#include "search.h"


int *input;
// input array size
int data_size;
// random data set variable
double factor, max, min = 0.0;

int main(){
	int go, size, i;

	printf("\n\t\tSelect Menu");
	printf("\n\t1. Linear_Recursion");
	printf("\n\t2. Linear_Search");
	printf("\n\t3. Jump_Search");
	printf("\n\t4. Binary_Recursion");
	printf("\n\t5. Binary_Search");
	printf("\n\t6. ALL_Search");
	printf("\n\t");
	printf("\n\t");

	scanf("%d", &go);

	printf("input Array size (exponentiation of 2) : ");
	scanf("%d", &size);

	data_size = (int)pow(2,size);

	// Randomize data (int)(rand()*factor)%(int)pow(2,size)+1 ( 1~2^arraysize )
	max = pow(2, size); // set rand max size
	factor = (max - min) / RAND_MAX; // set rand max factor
	srand(time(NULL));
	// increse rand max number. using factor!!


	input = (int *)malloc(sizeof(int) * data_size);

	for (i = 0; i < data_size; i++){ // fill input data
		input[i] = i+1;
	}



	switch(go){
	case 1:
		linear1();
		break;
	case 2:
		linear2();
		break;
	case 3:
		jump();
		break;
	case 4:
		binary1();
		break;
	case 5:
		binary2();
		break;
	case 6:
		linear1();
		linear2();
		jump();
		binary1();
		binary2();
		break;
	}

	return 0;
}
