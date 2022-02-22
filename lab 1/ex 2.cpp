#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std ;

int main ()
{
    FILE * fp ;
    
    if ( fopen_s ( &fp , "in.txt" , "r" ) != 0 )
    {
        printf ( "Eroare: nu am putut deschide fisierul\n" ) ;
    }
    else 
    {
        printf ( "Am deschis fisierul cu succes!" ) ;
    }
    system ( "pause ") ;
    return 0 ;
}