#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "NumberList.h"

using namespace std ;

int main ()
{
    NumberList nr ;
    
    nr.Init () ;
    
    nr.Add ( 3 ) ;
    nr.Add ( 5 ) ;
    nr.Add ( 1 ) ;

    nr.Sort () ;
    nr.Print () ;
}