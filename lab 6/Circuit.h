#pragma once

#include <stdlib.h>
#include "Car.h"
#include "Dacia.h"
#include "Toyota.h"
#include "Mercedes.h"
#include "Ford.h"
#include "Mazda.h"

using namespace std ;

class Circuit 
{
protected:
    Car ** masina ;
    Car ** ceicareauterminat ;
    Car ** nu ;
    int index_curent ;
    int index_maxim ;
    int index_ceicareauterminat ;
    int index_nu ;
public:
    Circuit () ;
    ~Circuit () ;
    bool AddCar ( Car * masinuta ) ;
    ///void PrinteazaDetalii () ;
    void Race () ;
    void ShowFinalRanks () ;
    void ShowWhoDidNotFinish () ;
    void SetLength ( int x );
    void SetWeather ( int x ) ;
} ;