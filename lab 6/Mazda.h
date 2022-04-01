#pragma once
#include "Car.h"

class Mazda : public Car 
{

public:
    Mazda () ;
    char * numele () ;
    float viteza_medie ( int x , int y ) ;
};