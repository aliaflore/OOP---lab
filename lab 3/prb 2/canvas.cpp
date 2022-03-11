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
            canvas[i] = new char [ inaltime ] () ;
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

void Canvas :: Clear ()
{
    for ( int i = 0 ; i < this -> latime ; i ++ )
        for ( int j = 0 ; j < this -> inaltime ; j ++ )
            canvas [ i ] [ j ] = ' ' ;
}

void Canvas :: DrawCircle ( int x , int y , int ray , char ch )
{
    for ( int i = 0 ; i < this -> latime ; i ++ )
        for ( int j = 0 ; j < this -> inaltime ; j ++ )
        if ( ( i - x ) * ( i - x ) + ( j - y ) * ( j - y ) >= ( ray - 1 ) * ( ray - 1 ) && ( i - x ) * ( i - x ) + ( j - y ) * ( j - y ) <= ( ray - 1 ) * ( ray + 1 ) )
            canvas [ i ] [ j ] = ch ;
}

void Canvas :: FillCircle ( int x , int y , int ray , char ch )
{
    for ( int i = 0 ; i < this -> latime ; i ++ )
        for ( int j = 0 ; j < this -> inaltime ; j ++ )
        if ( ( i - x ) * ( i - x ) + ( j - y ) * ( j - y ) <= ray * ray )
            canvas [ i ] [ j ] = ch ;
}

void  Canvas :: DrawRect ( int left, int top, int right, int bottom, char ch)
{
    for ( int i = top ; i < bottom ; i ++ )
        for ( int j = left ; j < right ; j ++ )
            if ( i == top or ( i == ( bottom - 1 ) ) or j == left or ( j == ( right - 1 ) ) )  
                canvas [ i ] [ j ] = ch ;
}

void  Canvas :: FillRect ( int left , int top , int right , int bottom , char ch )
{
    for ( int i = top ; i < bottom ; i ++ )
        for ( int j = left ; j < right ; j ++ )
            canvas [ i ] [ j ] = ch ;
}

void Canvas :: SetPoint ( int x , int y , char ch ) 
{
    canvas [ x ] [ y ] = ch ;
}

void Canvas :: DrawLine ( int x1 , int y1 , int x2 , int y2 , char ch )
{
    int dx = x2 - x1 ;
    int dy = y2 - y1 ;
    int D = 2 * dy - dx ;
    int y = y1 ;

    for ( int i = 0 ; i < x1 ; i ++ )
    {
        canvas [ i ] [ y ] = ch ;
        if ( D > 0 )
        {
            y = y + 1 ;
            D = D - 2 * dx ;
        }
        D = D + 2 * dy ;
    }
}