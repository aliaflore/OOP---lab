#include "sort.h"
#include <iostream>

using namespace std ;

int main ()
{

    /// CERINTA 1
    Sort c1 ( 10 , 10 , 100 ) ;
    c1 . Print () ;

    /// CERINTA 3
    int v [ 10 ] = { 10 , 24 , 13 , 34 , 15 , 46 , 7 , 18 , 91 , 11 } ;
    Sort c2 ( v , 10 ) ;
    c2 . Print () ;

    /// CERINTA 4
    Sort c3 ( 10 , 10 , 24 , 13 , 34 , 15 , 46 , 7 , 18 , 91 , 11 ) ;
    c3 . QuickSort ( false ) ;
    c3 . Print () ;

    /// CERINTA 5
    char c [] =  "10,24,13,34,15,46,7,18,91,11" ;
    Sort c4 ( c ) ;
    c4 . BubbleSort ( false ) ;
    c4 . Print () ;

    /// CERINTA 2
    Sort c5 ;
    c5 . InsertSort ( true ) ;
    c5 . Print () ;

    cout << endl << "numarul de elemente este " << c5 . GetElementsCount () << endl ;
    cout << endl << "Elementul 3 este " << c5 . GetElementFromIndex ( 3 ) << endl ;

    return 0 ;
}