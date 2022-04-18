#pragma once
using namespace std ;

template < typename T >
int comparare ( T a , T b )
{
    if ( a < b )
        return 1 ;
    return 0 ;
}

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
            cout << vector [ i ] << " " ;
        cout << endl ;
    }
    void insert ( T x  , T y ) 
    {
        /// x - elementul
        /// y - index ul 
        index ++ ;
        for ( int i = index - 1 ; i >= y + 1 ; i -- )
            this -> vector [ i ] = this -> vector [ i - 1 ] ;
        this -> vector [ y ] = x ;
    }
    void sort ( int ( * callback ) ( T , T ))
    {
        for ( T i = 0 ; i < this -> index - 1 ; i ++ )
            for ( T j = i + 1 ; j < this -> index ; j ++ )
                if ( callback != nullptr )
                    comparare ( this -> vector [ i ] , this -> [ j ] ) ;
    }
    T get () ;
    ///set method
    T count () 
    {
        return this -> index ; 
    }
    ///int firstIndexOf () ;
} ;