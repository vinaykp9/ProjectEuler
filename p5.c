/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
int isDivisible(int n)
{
	int i ,value;
	for( i = 1 ; i <= 20 ; i++ ){
		if ( n % i == 0)
			value =  TRUE;
		else {
			value = FALSE;
			break;
		}
	}
	return value;
}



int main()
{
	int n = 20;
	
	while( !isDivisible(n))
		n += 1;
	printf("%d\n", n );
	return 0;
}