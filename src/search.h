/*
 * search.h
 *
 *  Created on: 2015. 3. 25.
 *      Author: Administrator
 */

#ifndef HEADER_SEARCH_H_
#define HEADER_SEARCH_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>

#define CHECK_TIME_START __int64 freq, start, end; if (QueryPerformanceFrequency((LARGE_INTEGER*)&freq)) {QueryPerformanceCounter((LARGE_INTEGER*)&start);
#define CHECK_TIME_END(a,b) QueryPerformanceCounter((LARGE_INTEGER*)&end); a=(float)((double)(end - start)/freq*1000); b=TRUE; } else b=FALSE;

#define LOOP_COUNT 10000 //

void linear1();
int Linear_Search(int array[], int low, int high, int data);
void linear2();

void jump();

void binary1();
int Binary_Search(int array[], int lower, int upper, int search_data);
void binary2();


#endif /* HEADER_SEARCH_H_ */
