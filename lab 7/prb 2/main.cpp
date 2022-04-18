#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "templates.h"

using namespace std ;

int main ()
{
    Clasa<int> a ;
    a . push ( 5 ) ;
    a . push ( 7 ) ;
    a . push ( 8 ) ;
    a . push ( 0 ) ;
    a . push ( 1 ) ;
    a . afisare () ;
    a . insert ( 2 , 0 ) ;
    a . insert ( 3 , 0 ) ;
    a . callback_1 ( sort ) ;
    a . afisare () ;
    ///a . afisare () ;
    return 0 ;
}