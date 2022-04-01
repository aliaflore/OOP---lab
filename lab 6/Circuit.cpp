#include "Circuit.h"
#include "Car.h"
#include "Weather.h"
#include <iostream>
using namespace std ; 

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

void Circuit :: SetWeather ( Weather  x )
{
    if ( x == rain )
        this -> w = 0 ;
    else if ( x == sunny )
        this -> w = 1 ;
    else this -> w = 2 ;
} 

void Circuit :: SetLength ( int x )
{
    this -> l = x ;
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

void Circuit :: ShowWhoDidNotFinish () 
{
    if ( index_nu > 0 )
    {
        for ( int i = 0 ; i < index_nu ; i ++ )
            cout << nu [ i ] -> numele () << endl ;
    }
    else if ( index_nu == 0 )
        cout << " Toate masinile au terminat. Nu exista nicio masina sa nu fi terminat " ; 

}


void Circuit :: Race () 
{
    for ( int i = 0 ; i < index_curent ; i ++ )
        if ( masina [ i ] -> viteza_medie ( w , l ) > 0 )
            ceicareauterminat [ index_ceicareauterminat ++ ] = masina [ i ] ;
        else 
            nu [ index_nu ++ ] = masina [ i ] ;
}

void Circuit :: ShowFinalRanks ()
{
    for ( int i = 0 ; i < index_ceicareauterminat - 1 ; i ++ )
        for ( int j = 0 ; j < index_ceicareauterminat ; j ++ )
            if ( masina [ i ] -> viteza_medie ( w , l ) > masina [ j ] -> viteza_medie ( w , l ) )
            {
                Car * aux = ceicareauterminat [ i ] ;
                ceicareauterminat [ i ] = ceicareauterminat [ j ] ;
                ceicareauterminat [ j ] = aux ;
            }
    cout << " Ranking : " << endl ;
    for ( int i = index_ceicareauterminat - 1 ; i >= 0 ; i ++ )
        cout << ceicareauterminat [ i ] -> numele () << endl ;
}