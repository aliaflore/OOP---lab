#include "Number.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cmath>
using namespace std ;

/// CONSTRUCTORUL INITIAL
Number :: Number ( const char * value , int base )
{
    this -> baza = base ;
    /*
    for ( int i = 0 ; i < strlen ( value ) ; i ++ )
        this -> val [ i ] = * ( value + i ) ;
    this -> val [ strlen ( value ) ] = 0 ;*/
    strcpy ( this -> val , value ) ;
}

/// DESTRUCTORUL 
Number :: ~Number ()
{

}

/// CONSTRUCTORUL DE COPIERE
Number :: Number ( Number &d )
{
    this -> baza = d . baza ;
    strcpy ( this -> val , d . val ) ;
}

/// CONSTRUCTORUL DE MUTARE
Number :: Number ( Number &&d )
{
    this -> baza = d . baza ;
    strcpy ( this -> val , d . val ) ;   
}

/// MOVE CONSTRUCTOR ASSIGNMENT
Number & Number :: operator = ( Number && d ) 
{
    if ( d . baza > this -> baza )
    {
        int numar = 0 ;
        int putere = 0 ;
        for ( int i = strlen ( this -> val ) - 1 ; i >= 0 ; i -- )
        {
            numar += ( ( this -> val [ i ] - 48 ) * pow ( this -> baza , putere ) ) ;
            putere ++ ;
        }//am transformat in baza 10 
        
        this -> baza = d . baza ;
        int nr = 0 ;
        int p = 1 ;
     
        while ( numar >= 0 )
        {
            nr = ( nr % this -> baza ) * p + nr ;
            p *= 10 ;
            numar /= this -> baza ;
        }//am transformat in baza mai mare
    }
    else
    {
        this -> baza = d . baza ;
        strcpy ( this -> val , d . val ) ;
    }
    return * this ;
}

Number & Number :: operator = ( char * p )
{
    strcpy ( this -> val , p ) ;
    return * this ;
}

Number & Number :: operator = ( int nr )
{
    int copie = nr , n = 0 ;
    while ( copie != 0 )
        copie /= 10 , n ++ ;
    n = pow ( 10 , n - 1 ) ;
    int i = 0 ;
    while ( nr != 0 )
    {
        copie = nr / n ;
        this -> val [ i ] = ( char ) ( copie + 48 ) ;
        nr %= n ;
    }
    return * this ;
}

/// +
int operator + ( Number n1 , Number n2 )
{
    int numar_1 = 0 ;
    int numar_2 = 0 ;
    int putere = 0 ;
    for ( int i = strlen ( n1 . val ) - 1 ; i >= 0 ; i -- )
    {
        numar_1 += ( ( n1 . val [ i ] - 48 ) * pow ( n1 . baza , putere ) ) ;
        putere ++ ;
    }
    putere = 0 ;
    for ( int i = strlen ( n2 . val ) - 1 ; i >= 0 ; i -- )
    {
        numar_2 += (  ( n2 . val [ i ] - 48 ) * pow ( n2 . baza , putere ) ) ;
        putere ++ ;
    }
    return numar_1 + numar_2 ;
}

/// - 
int operator - ( Number n1 , Number n2 )
{
    int numar_1 = 0 ;
    int numar_2 = 0 ;
    int putere = 0 ;
    for ( int i = strlen ( n1 . val ) - 1 ; i >= 0 ; i -- )
    {
        numar_1 += ( ( n1 . val [ i ] - 48 ) * pow ( n1 . baza , putere ) ) ;
        putere ++ ;
    }
    putere = 0 ;
    for ( int i = strlen ( n2 . val ) - 1 ; i >= 0 ; i -- )
    {
        numar_2 += (  ( n2 . val [ i ] - 48 ) * pow ( n2 . baza , putere ) ) ;
        putere ++ ;
    }
    return numar_1 - numar_2 ;
}

/// []
int Number :: operator [] ( int numar )
{
    if ( numar >= this -> GetDigitsCount () )
        exit ( 0 ) ;
    return this -> val [ numar ] ;
}

/// >
bool Number :: operator > ( const Number &n )
{
    int numar_1 = 0 ;
    int numar_2 = 0 ;
    int putere = 0 ;
    for ( int i = strlen ( this -> val ) - 1 ; i >= 0 ; i -- )
    {
        numar_1 += ( ( this -> val [ i ] - 48 ) * pow ( this -> baza , putere ) ) ;
        putere ++ ;
    }
    putere = 0 ;
    for ( int i = strlen ( n . val ) - 1 ; i >= 0 ; i -- )
    {
        numar_2 += (  ( n . val [ i ] - 48 ) * pow ( n . baza , putere ) ) ;
        putere ++ ;
    }
    if ( numar_1 > numar_2 )
        return true ;
    return false ;
}

/// <
bool Number :: operator < ( const Number &n )
{
    int numar_1 = 0 ;
    int numar_2 = 0 ;
    int putere = 0 ;
    for ( int i = strlen ( this -> val ) - 1 ; i >= 0 ; i -- )
    {
        numar_1 += ( ( this -> val [ i ] - 48 ) * pow ( this -> baza , putere ) ) ;
        putere ++ ;
    }
    putere = 0 ;
    for ( int i = strlen ( n . val ) - 1 ; i >= 0 ; i -- )
    {
        numar_2 += (  ( n . val [ i ] - 48 ) * pow ( n . baza , putere ) ) ;
        putere ++ ;
    }
    if ( numar_1 < numar_2 )
        return true ;
    return false ;
}

/// <=
bool Number :: operator <= ( const Number &n )
{
    int numar_1 = 0 ;
    int numar_2 = 0 ;
    int putere = 0 ;
    for ( int i = strlen ( this -> val ) - 1 ; i >= 0 ; i -- )
    {
        numar_1 += ( ( this -> val [ i ] - 48 ) * pow ( this -> baza , putere ) ) ;
        putere ++ ;
    }
    putere = 0 ;
    for ( int i = strlen ( n . val ) - 1 ; i >= 0 ; i -- )
    {
        numar_2 += (  ( n . val [ i ] - 48 ) * pow ( n . baza , putere ) ) ;
        putere ++ ;
    }
    if ( numar_1 <= numar_2 )
        return true ;
    return false ;
}

/// >=
bool Number :: operator >= ( const Number &n )
{
    int numar_1 = 0 ;
    int numar_2 = 0 ;
    int putere = 0 ;
    for ( int i = strlen ( this -> val ) - 1 ; i >= 0 ; i -- )
    {
        numar_1 += ( ( this -> val [ i ] - 48 ) * pow ( this -> baza , putere ) ) ;
        putere ++ ;
    }
    putere = 0 ;
    for ( int i = strlen ( n . val ) - 1 ; i >= 0 ; i -- )
    {
        numar_2 += (  ( n . val [ i ] - 48 ) * pow ( n . baza , putere ) ) ;
        putere ++ ;
    }
    if ( numar_1 >= numar_2 )
        return true ;
    return false ;
}

/// ==
bool Number :: operator == ( const Number &n )
{
    int numar_1 = 0 ;
    int numar_2 = 0 ;
    int putere = 0 ;
    for ( int i = strlen ( this -> val ) - 1 ; i >= 0 ; i -- )
    {
        numar_1 += ( ( this -> val [ i ] - 48 ) * pow ( this -> baza , putere ) ) ;
        putere ++ ;
    }
    putere = 0 ;
    for ( int i = strlen ( n . val ) - 1 ; i >= 0 ; i -- )
    {
        numar_2 += (  ( n . val [ i ] - 48 ) * pow ( n . baza , putere ) ) ;
        putere ++ ;
    }
    if ( numar_1 == numar_2 )
        return true ;
    return false ;
}

/// PREFIX OPERATOR
Number Number :: operator -- ()
{
    for ( int i = 0 ; i < strlen ( this -> val ) ; i ++ )
        this -> val [ i ] = this -> val [ i + 1 ] ;
    this -> val [ strlen ( this -> val ) ] = 0 ;
    return * this ;
}

/// POSTFIX OPERATOR
Number Number :: operator -- ( int n )
{
    this -> val [ strlen ( this -> val ) - 1 ] = 0 ;
    return * this ;
}

/// SCHIMBAREA BAZEI
void Number :: SwitchBase ( int newBase )
{
    int numar = 0 ;
    int putere = 0 ;
    for ( int i = strlen ( this -> val ) - 1 ; i >= 0 ; i -- )
    {
        numar += ( ( this -> val [ i ] - 48 ) * pow ( this -> baza , putere ) ) ;
        putere ++ ;
    }
    this -> baza = newBase ;
    
    int nr = 0 ;
    int p = 1 ;
     
    while ( numar >= 0 )
    {
        nr = ( nr % this -> baza ) * p + nr ;
        p *= 10 ;
        numar /= this -> baza ;
    }
    
}

/// FUNCTIA DE AFISARE
void Number :: Print ()
{
    cout << " numarul este " ;
    for ( int i = 0 ; i < strlen ( this -> val ) ; i ++ )
        cout << this -> val [ i ] ;
    cout << " cu baza " << this -> baza ;
    cout << endl ;    
}

/// FUNCTIA DE A LUA NR DE CIFRE
int Number :: GetDigitsCount ()
{
    return strlen ( this -> val ) ;
}

/// FUNCTIA DE A LUA BAZA
int Number :: GetBase ()
{
    return this -> baza ;
}
