#pragma once
#include "Car.h"

class Mazda : public Car 
{
    int fuel_capacity () ;
    int fuel_consumption () ;
    int average_speed ( Weather x ) ;
    const char * name () ;
};