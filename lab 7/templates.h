#pragma once
using namespace std ;
template < class T >
class Clasa 
{
private:
    T n ;
    T * vector ;
    T index ;
public:
    Clasa () 
    {
        this -> n = 100 ;
        this -> index = 0 ;
        this -> vector = ( int * ) ( malloc ( this -> n * sizeof ( n ) ) ) ;
    }
    void initializare ()
    {
        this -> vector = ( int * ) ( malloc ( this -> n * sizeof ( n ) ) ) ;
    }
    void push ( T x )
    {
        vector [ index ] = x ;
        index ++ ;
    }
    T pop () 
    {
        return vector [ index - 1 ] ;
    }
    void remove ( T x ) 
    {

    }
    void afisare ()
    {
        for ( T i = 0 ; i < index ; i ++ )
            cout << vector [ i ] << " " << endl ;
    }
    void insert ( T x ) ;
    void sort ()
    {
        for ( T i = 0 ; i < this -> index - 1 ; i ++ )
            for ( T j = i + 1 ; j < this -> index ; j ++ )
                if ( this -> vector [ i ] > this -> vector [ j ] )
                    swap ( this -> vector [ i ] , this -> vector [ j ] ) ;
    }
    T get () ;
    ///set method
    T count () 
    {
        return this -> index ; 
    }
    ///int firstIndexOf () ;
} ;