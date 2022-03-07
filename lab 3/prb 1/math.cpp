#include "math.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int Math :: Add ( int x , int y ) 
{
    return ( x + y ) ;
}

int Math :: Add ( int x , int y , int z ) 
{
    return ( x + y + z ) ;
}

int Math :: Add ( double x , double y ) 
{
    return ( x + y ) ;
}

int Math :: Add ( double x , double y , double z ) 
{
    return ( x + y + z ) ;
}

int Math :: Mul ( int x , int y )
{
    return ( x * y ) ;
}


int Math :: Mul ( int x , int y , int z )
{
    return ( x * y * z ) ;
}

int Math :: Mul ( double x , double y )
{
    return ( x * y ) ;
}

int Math :: Mul ( double x , double y , double z )
{
    return ( x * y * z ) ;
}

int Math :: Add ( int count , ... )
{
    va_list vl ;
    va_start ( vl , count ) ;
    int suma = 0 ;
    for ( int i = 0 ; i < count ; i ++ )
        suma += va_arg ( vl , int ) ;
    return suma ;
} 

char* Math :: Add ( const char * a , const char * b )
{
    char * c = new char [ strlen ( a ) + strlen ( b ) + 1 ] ;
    if ( a != 0 and b != 0 )
    {
        strcat ( c , a ) ;
        strcat ( c , b ) ;
    }
    return c ;
}  
