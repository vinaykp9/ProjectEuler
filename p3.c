/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include<stdio.h>

unsigned int isPrime(unsigned int number) 
{
    int i;
    for ( i = 2 ; i < number ; i++ ) {
        if (number % i == 0 && i != number) return 0;
    }
    return 1;
}

unsigned int nextPrime(unsigned int n)
{
	n = n + 1 ; 
	while(isPrime(n) == 0)
		n = n + 1 ;
	return n; 

}

int main()
{

	unsigned long long i = 600851475143;
	//printf( " %llu\n" , i );
	//int i = 13195;
	unsigned int n2 = 2;
	while( i != 1 ){
		if ( i % n2 == 0 ){
			i = i / n2;
			printf(" %u x ", n2 );
		}
		else
			n2 = nextPrime(n2);
	}
	


	return 0;

}
