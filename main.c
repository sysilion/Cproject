/*
 * main.c
 *
 *  Created on: 2015. 3. 19.
 *      Author: Administrator
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	int go;

	printf("\n\t\tSelect Menu");
	printf("\n\t1. Linear_Recursion");
	printf("\n\t2. Linear_Search");
	printf("\n\t3. Jump_Search");
	printf("\n\t");
	printf("\n\t");

	scanf("%d", &go);


	switch(go){
	case 1: linear1();
	break;
	case 2: linear2();
	break;
	case 3: jump();
	break;
	}

	return 0;
}
