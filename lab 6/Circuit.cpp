#include "Circuit.h"

Circuit :: Circuit ()
{
    this -> index_maxim = 100 ;
    this -> index_curent = 0 ;
    this -> index_ceicareauterminat = 0 ;
    this -> index_nu = 0 ;
    this -> masina = ( Car ** ) ( malloc ( this -> index_maxim * sizeof ( Car ) ) ) ;
    this -> nu = ( Car ** ) ( malloc ( this -> index_maxim * sizeof ( Car ) ) ) ;
    this -> ceicareauterminat = ( Car ** ) ( malloc ( this -> index_maxim * sizeof ( Car ) ) ) ;
}

Circuit :: ~Circuit () 
{

}

bool Circuit :: AddCar ( Car * masinuta )
{
    if ( this -> index_curent < this -> index_maxim )
    {
        this -> masina [ this -> index_curent ++ ] = masinuta ;
        return true ;
    }
    return false ;
}
