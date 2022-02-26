#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std ;

int function ( char myString [ 100 ] )
{
	int n = 0 ;
	for ( int i = 0 ; i < strlen ( myString ) ; i ++ )
		if ( myString [ i ] != '\n' )
			n = n * 10 + ( myString [ i ] - 48 ) ;
	return n ;
}

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
			n = function ( myString ) ;
			suma += n ;
		}
		printf ( "%d\n" , suma ) ;

    }
    return 0 ;
}