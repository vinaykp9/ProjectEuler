/*
The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include<stdio.h>
int main()
{

	int sum_of_sqr = 0, sum_of_n = 0;
	int n = 100;
	sum_of_sqr = (n * (n+1) * (2*n+1)) / 6;
	printf("%d\n",sum_of_sqr );
	sum_of_n = (n *(n+1)) / 2;
	printf("%d\n",sum_of_n );
	printf("diference = %d \n", (sum_of_n * sum_of_n) - sum_of_sqr);
	return 0;
} 