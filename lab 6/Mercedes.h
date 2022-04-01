#pragma once
#include "Car.h"

class Mercedes : public Car 
{

public:
    Mercedes () ;
    char * numele () ;
    float viteza_medie ( int x , int y ) ;
};