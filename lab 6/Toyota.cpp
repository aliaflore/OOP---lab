#include "Toyota.h"

Toyota :: Toyota ()
{
    this -> fuel_capacity ;
    this -> fuel_consumption ;
    this -> average_speed [ 0 ] = 10 ;
    this -> average_speed [ 1 ] = 20 ; 
    this -> average_speed [ 2 ] = 5 ;  
    this -> name = ( char * ) "Toyota" ;
}


char * Toyota :: numele () 
{
    return this -> name ;
}


float Toyota :: viteza_medie ( int x , int y )
{
    /// viteza = distanta / timp 
    /// distanta = viteza * timp 
    float timp = this -> fuel_capacity / this -> fuel_consumption ;
    float distanta = timp * this -> average_speed [ x ] ;
    return ( timp * y ) / distanta ;
} 
