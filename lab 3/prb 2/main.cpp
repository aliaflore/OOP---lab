#include "canvas.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std ;

int main ()
{
    Canvas c1 ( 50 , 50 ) ;

    ///DRAW CIRCLE
    ///c1 . DrawCircle ( 30 , 30 , 10 , '.' ) ;
    ///c1 . Print () ;

    ///FILL CIRCLE
    ///c1 . FillCircle ( 30 , 30 , 10 , '.' ) ;
    ///c1 . Clear () ;
    ///c1 . Print () ;

    ///DRAW RECTANGLE
    ///c1 . DrawRect ( 10 , 10 , 20 , 20 , '.' ) ;
    ///c1 . Print () ;

    ///FILL RECTANGLE
    ///c1 . FillRect ( 10 , 10 , 20 , 20 , '.' ) ;
    ///c1 . Clear () ;
    ///c1 . Print () ;

    ///SET POINT
    ///c1 . SetPoint ( 10 , 10 , '.' ) ;
    ///c1 . Print () ;

    ///DRAW LINE 
    c1.DrawLine ( 10 , 10 , 20 , 20 , '.' ) ;
    c1.Print () ;
    return 0 ;
}