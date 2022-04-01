#pragma once
#include "Car.h"

class Dacia : public Car 
{

public:
    Dacia () ;
    char * numele () ;
    float viteza_medie ( int x , int y ) ;
};