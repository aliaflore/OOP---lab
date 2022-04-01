#pragma once
#include "Car.h"

class Toyota : public Car
{

public:
    Toyota () ;
    char * numele () ;
    float viteza_medie ( int x , int y ) ;
};