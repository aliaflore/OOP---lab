#include "math.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std ;


int main ()
{

    cout << "Raspunsuri " << endl ;
    cout << Math :: Add ( 1 , 2 ) << endl ;
    cout << Math :: Add ( 1 , 2 , 3 ) << endl ;
    cout << Math :: Add ( 1.6 , 2.5 ) << endl ;
    cout << Math :: Add ( 1.1 , 2.2 , 3.3 ) << endl ;
    cout << Math :: Mul ( 1 , 2 ) << endl ;
    cout << Math :: Mul ( 1 , 2 , 3 ) << endl ;
    cout << Math :: Mul ( 1.5 , 2.5 ) << endl ;
    cout << Math :: Mul ( 1.5 , 2.5 , 1.5 ) << endl ;
    cout << Math :: Add ( 5 , 1 , 1 , 1 , 1 , 2 ) << endl ;
    cout << Math :: Add ( "ale" , "xia" ) ;
    return 0 ;
}