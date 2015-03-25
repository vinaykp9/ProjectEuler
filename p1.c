#include<stdio.h>

int main()
{
    int num , sum = 0 , i;
    printf( " enter the num\n " );
    scanf( "%d" , &num );
    for( i = 0 ; i < num ; i++ ){
       if ( i % 3 == 0 || i % 5 == 0 ){
       		printf( " %d\n ", i );
       		sum += i;
       }
       
    }
    printf( " Sum is = %d\n " , sum );
	return 0;
}
