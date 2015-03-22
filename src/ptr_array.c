/*
 * ptr_array.c
 *
 *  Created on: 2015. 3. 12.
 *      Author: Administrator
 */

/*int main(argc,argv){
	int a[] = { 0, 1, 2, 3, 4 };
	int *p[] = { a, a+1, a+2, a+3, a+4 };
	int **pp = p;


	printf("%d %d\n", a, *a); // a林家蔼, 0
	printf("%d %d %d\n", p, *p, **p); // p林家蔼, a林家蔼, a蔼 0
	printf("%d %d %d\n", pp, *pp, **pp); // p林家蔼, a林家蔼, 0

	pp++; // p+1
	printf("%d %d %d\n", pp-p, *pp-a, **pp); // 1, a+1-a=1, 1
	pp++; // a+1
	printf("%d %d %d\n", pp-p, *pp-a, **pp); // p+1-p,
	*++pp;
	printf("%d %d %d\n", pp-p, *pp-a, **pp);
	++*pp;
	printf("%d %d %d\n", pp-p, *pp-a, **pp);

	pp = p;
	pp++;
	printf("%d %d\n", pp-p, *pp-a, **pp);
	++*pp;
	printf("%d %d %d\n", pp-p, *pp-a, **pp);
	++**pp;
	printf("%d %d %d\n", pp-p, *pp-a, **pp);
}*/
