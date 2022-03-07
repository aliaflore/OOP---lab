#include "canvas.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std ;

int main ()
{
    Canvas c1 ( 50 , 50 ) ;
    c1 . DrawCircle ( 30 , 30 , 10 , '.' ) ;
    c1 . Print () ;
    return 0 ;
}