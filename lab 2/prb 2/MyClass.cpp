#include "MyClass.h"
#include <string.h>

MyClass :: MyClass ()
{
    this -> nota_eng = 0 ;
    this -> nota_istorie = 0 ;
    this -> nota_mate = 0 ;  
}

void MyClass :: setNota_Engleza ( int nota )
{
    this -> nota_eng = nota ;
}

void MyClass :: setNota_Istorie ( int nota )
{
    this -> nota_istorie = nota ;
}

void MyClass :: setNota_Mate ( int nota )
{
    this -> nota_mate = nota ;
}

void MyClass :: setName ( char numele [ 100 ] )
{
    strcpy ( this -> nume , numele ) ;
}

float MyClass :: getNota_Engleza ()
{
    return this -> nota_eng ;
}

float MyClass :: getNota_Istorie ()
{
    return this -> nota_istorie ;
}

float MyClass :: getNota_Mate ()
{
    return this -> nota_mate ;
}

float MyClass :: average ()
{
    return (float)( this -> nota_eng + this -> nota_istorie + this -> nota_mate ) / 3 ;
}

char* MyClass :: getName ()
{
    return this -> nume ;
}