#include "Number.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std ;

Number :: Number ( const char * value , int base )
{
    this -> baza = base ;
    for ( int i = 0 ; i < strlen ( value ) ; i ++ )
        this -> val [ i ] = * ( value + i ) ;
    ///strcpy ( this -> value , value ) ;
}

void Number :: Print ()
{
    cout << " numarul este " ;
    for ( int i = 0 ; i < strlen ( this -> val ) ; i ++ )
        cout << this -> val [ i ] ;
    cout << " cu baza " << this -> baza ;    
}

int Number :: GetDigitsCount ()
{
    return strlen ( this -> val ) ;
}

int Number :: GetBase ()
{
    return this -> baza ;
}
