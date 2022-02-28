#include "MyClass.h"
#include "Global.h"

#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std ;

int main () 
{
    MyClass elev1 ;
    MyClass elev2 ;

    elev1.setName ( "Ionela" ) ;
    elev1.setNota_Engleza ( 5 ) ;
    elev1.setNota_Istorie ( 8 ) ;
    elev1.setNota_Mate ( 10 ) ;

    elev2.setName ( "Alina" ) ;
    elev2.setNota_Engleza ( 10 ) ;
    elev2.setNota_Istorie ( 10 ) ;
    elev2.setNota_Mate ( 9 ) ;
 
    cout << "Numele primului elev este " << elev1.getName () << " si are urmatoarele note " << endl ;
    cout << "nota la engleza " << elev1.getNota_Engleza () << endl ;
    cout << "nota la istorie " << elev1.getNota_Istorie () << endl ;
    cout << "nota la mate " << elev1.getNota_Mate () << endl ;
    cout << "average-ul este " << elev1.average () << endl ; 
    cout << endl ;
    
    cout << "Numele celui de-al doilea elev este " << elev2.getName () << " si are urmatoarele note " << endl ;
    cout << "nota la engleza " << elev2.getNota_Engleza () << endl ;
    cout << "nota la istorie " << elev2.getNota_Istorie () << endl ;
    cout << "nota la mate " << elev2.getNota_Mate () << endl ;
    cout << "average-ul este " << elev2.average () << endl ;
    cout << endl ;

    ///cout << " Valoarea comparatiei dintre nume este " << compara_nume ( &elev1 , &elev2 ) ;
    
    return 0 ;
}

