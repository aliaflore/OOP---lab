#pragma once
#include "Car.h"

class Ford : public Car 
{

public:
    Ford () ;
    char * numele () ;
    float viteza_medie ( int x , int y ) ;
};