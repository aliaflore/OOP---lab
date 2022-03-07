#include "canvas.h"
#include <iostream>

using namespace std ;

Canvas :: Canvas ( int latime , int inaltime )
{
    if ( latime <= 0 )
        return ;
    else
        if ( inaltime <= 0 )
            return ;
    else
    {
        this -> inaltime = inaltime ;
        this -> latime = latime ;
        canvas = new char* [ latime ] () ;
        for ( int i = 0 ; i < latime  ; i++ )
            canvas[i] = new char[ inaltime ] () ;
        for ( int i = 0 ; i < latime ; i ++ )
            for ( int j = 0 ; j < inaltime ; j ++ )
                canvas [ i ] [ j ] = ' ' ;

    }
}

void Canvas :: Print () 
{
    for ( int i = 0 ; i < latime ; i ++ )
    {
        for ( int j = 0 ; j < inaltime ; j ++ )
            cout << canvas [ i ] [ j ] ;
        cout << endl ;
    }
}

void Canvas :: DrawCircle ( int x , int y , int ray , char ch )
{
    for ( int i = 0 ; i < this -> latime ; i ++ )
        for ( int j = 0 ; j < this -> inaltime ; j ++ )
        if ( ( i - x ) * ( i - x ) + ( j - y ) * ( j - y ) >= ( ray - 1 ) * ( ray - 1 ) && ( i - x ) * ( i - x ) + ( j - y ) * ( j - y ) <= ( ray - 1 ) * ( ray + 1 ) )
            canvas [ i ] [ j ] = ch ;
}