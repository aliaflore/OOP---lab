#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std ;

int main ()
{
    int n , suma = 0 ;
    FILE* fp;
    fp = fopen ( "in.txt" , "r" ) ;
	if ( fp == 0 )
	{
		perror ( "Eroare la deschidere, cu mesajul de eroare:" ) ;
        exit ( 1 ) ;
	}
	else 
    {
		//printf ( "Am deschis fisierul cu success!\n" ) ;
		char myString [ 200 ] ;
		while ( fgets ( myString , 200 , fp ) != 0 )
		{
			myString [ strlen ( myString ) - 1 ] = '\0' ;
			printf ( "%s\n" , myString ) ;
			n = 0 ;
			for ( int i = 0 ; i < strlen ( myString ) ; i ++ )
				n = n * 10 + ( myString [ i ] - 48 );
			printf ( "%d\n" , n ) ;
			suma += n ;
		}
		printf ( "%d\n" , suma ) ;

    }
    return 0 ;
}