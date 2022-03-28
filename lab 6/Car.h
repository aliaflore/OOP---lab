#pragma once

#include "Weather.h"

class Car
{
public:
    virtual int fuel_capacity () = 0 ;
    virtual int fuel_consumption () = 0 ;
    virtual int average_speed ( Weather x ) = 0 ;
    virtual const char * name () const = 0 ;
};