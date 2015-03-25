/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include<stdio.h>

int isPalindrome(int p)
{
	int q = p;
	int rev = 0 ,d;
	while ( q > 0 ){
		
		d = q % 10;
		q = q / 10;
		rev = rev * 10 + d ;
	}
	if ( p == rev)
		return 1;
	else
		return 0;
	
}
int isLarge(int p)
{
	static int large = 1;
	if ( p > large){
		large = p;
		return large;
	}
}

int main()
{
	//int n1 = 999 , n2 = 999;
	int i , j , k , large;
	for( i = 999 ; i >= 100 ;  i-- ){
		for( j = 999 ; j >= 100 ; j-- ){
			k = i * j;
			if( isPalindrome(k) ){
				printf( " %d \t", k);
				large = isLarge(k);
			}
		}
	}
	printf(" Largest palindrom is %d\n", large );
	return 0;
}