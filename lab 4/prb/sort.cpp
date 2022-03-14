#include "sort.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <iostream>
#include <string.h>

using namespace std ;


void Sort :: Print ()
{
    cout << "\n" ;
    for ( int i = 0 ; i < this -> n ; i ++ )
        cout << this -> vector [ i ] << " " ;
    cout << "\n" ;
}


///CERINTA NR 1
Sort :: Sort ( int nr , int min_el , int max_el )
{
    this -> vector = ( int * ) ( malloc ( this -> n * sizeof ( int ) ) ) ;
    time_t t ;
	srand ( ( unsigned ) time ( &t ) ) ;
	for ( int i = 0 ; i < nr ; i ++ ) 
		this -> vector [ i ] = min_el + rand () % ( min_el - max_el + 1 ) ;
}

///CERINTA NR 3
Sort :: Sort ( int * vector , int nr_el )
{
    this -> vector = ( int * ) ( malloc ( this -> n * sizeof ( int ) ) ) ;
    for ( int i = 0 ; i < this -> n ; i ++ )
        this -> vector [ i ] = vector [ i ] ;
}

///CERINTA NR 4
Sort :: Sort ( int count , ... )
{
    this -> vector = ( int * ) ( malloc ( this -> n * sizeof ( int ) ) ) ;
    va_list vl ;
    va_start ( vl , count ) ;
    for ( int i = 0 ; i < count ; i ++ )
        this -> vector [ i ] = va_arg ( vl , int ) ;
    va_end ( vl ) ;
}

///CERINTA NR 5
Sort :: Sort ( char * string )
{
    this -> vector = ( int * ) ( malloc ( this -> n * sizeof ( int ) ) ) ;
    char * p ;
    p = strtok ( string , "," ) ;
    int i = 0 ;
    while ( p != 0 )
    {
        int numar = 0 ;
        for ( int j = 0 ; j < strlen ( p ) ; j ++ )
            numar = numar * 10 + ( ( int ) p [ j ] - 48 ) ;
        this -> vector [ i ++ ] = numar ;
        p = strtok ( 0 , "," ) ;
    }
}

///CERINTA NR 2
Sort :: Sort () : vector ( new int [ 10 ] { 10 , 24 , 13 , 34 , 15 , 46 , 7 , 18 , 91 , 11 } )
{

}

void Sort :: InsertSort ( bool ascendent )
{
    if ( ascendent == true )
    {
        int i , key , j ;
        for ( i = 1 ; i < n ; i ++ )
        {
            key = this -> vector [ i ] ;
            j = i - 1 ;
            while ( j >= 0 and this -> vector [ j ] > key )
            {
                this -> vector [ j + 1 ] = this -> vector [ j ] ;
                j = j - 1 ;
            }
            this -> vector [ j + 1 ] = key ;
        }
    }
    else
    {
        int i , key , j ;
        for ( i = 1 ; i < n ; i ++ )
        {
            key = this -> vector [ i ] ;
            j = i - 1 ;
            while ( j >= 0 and this -> vector [ j ] < key )
            {
                this -> vector [ j + 1 ] = this -> vector [ j ] ;
                j = j - 1 ;
            }
            this -> vector [ j + 1 ] = key ;
        }
    }
}

void Sort :: BubbleSort ( bool ascendent )
{
    if ( ascendent == true )
    {
        for ( int i = 0 ; i < this -> n ; i ++ )
            for ( int j = 0 ; j < this -> n - i - 1 ; j ++ )
                if ( this -> vector [ j ] > this -> vector [ j + 1 ] )
                    swap ( this -> vector [ j ] , this -> vector [ j + 1 ] ) ;
    }
    else
    {
        for ( int i = 0 ; i < this -> n ; i ++ )
            for ( int j = 0 ; j < this -> n - i - 1 ; j ++ )
                if ( this -> vector [ j ] < this -> vector [ j + 1 ] )
                    swap ( this -> vector [ j ] , this -> vector [ j + 1 ] ) ;
    }
}

int partition_1 ( int arr [] , int low , int high )
{
    int pivot = arr [ high ] ; 
    int i = ( low - 1 ) ;
 
    for ( int j = low ; j <= high - 1 ; j ++ )
    {
        if (arr[j] < pivot)
        {
            i++;
            swap ( arr [ i ] , arr [ j  ] ) ;
        }
    }
    swap( arr [ i + 1 ] , arr [ high ] ) ;
    return ( i + 1 ) ;
}

int partition_2 ( int arr [] , int low , int high )
{
    int pivot = arr [ high ] ; 
    int i = ( low - 1 ) ;
 
    for ( int j = low ; j <= high - 1 ; j ++ )
    {
        if (arr[j] > pivot)
        {
            i++;
            swap ( arr [ i ] , arr [ j  ] ) ;
        }
    }
    swap( arr [ i + 1 ] , arr [ high ] ) ;
    return ( i + 1 ) ;
}



void Quick_1 ( int arr [] , int low , int high )
{
    if (low < high)
    {
        int pi = partition_1 ( arr , low , high ) ;
        Quick_1 ( arr , low , pi - 1 ) ;
        Quick_1 ( arr , pi + 1 , high ) ;
    }
}

void Quick_2 ( int arr [] , int low , int high )
{
    if (low < high)
    {
        int pi = partition_2 ( arr , low , high ) ;
 
        // Separately sort elements before
        // partition and after partition
        Quick_2 ( arr , low , pi - 1 ) ;
        Quick_2 ( arr , pi + 1 , high ) ;
    }
}

void Sort :: QuickSort ( bool ascendent )
{
    if ( ascendent == true )
        Quick_1 ( this -> vector , 0 , this -> n - 1 ) ;
    else
        Quick_2 ( this -> vector , 0 , this -> n - 1 ) ;
}

int Sort ::GetElementsCount ()
{
    return this -> n ;
}

int Sort :: GetElementFromIndex ( int index )
{
    return this -> vector [ index - 1 ] ;
}