#pragma once

#include "Weather.h"

class Car
{
protected:
    int fuel_capacity ;
    int fuel_consumption ;
    int average_speed [ 3 ] ;
    char * name ;
public:
    virtual char * numele () = 0 ;
    virtual float viteza_medie ( int x , int y ) ;
};