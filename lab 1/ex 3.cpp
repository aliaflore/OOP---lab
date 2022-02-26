#include <iostream>
#include <string.h>
using namespace std ;

int main ()
{
    char s [ 100 ] ;
    scanf( "%[^\n]s", s );
    char* p , a [ 100 ] [ 100 ];
    p = strtok ( s , " " ) ;
    int n = 0 ;
    while ( p != NULL )
    {
        strcpy ( a [ n ++ ] , p ) ;
        p = strtok ( NULL , " " ) ;
    }
    
    for ( int i = 0 ; i < n - 1 ; i ++ )
        for ( int j = i + 1 ; j < n ; j ++ )
            if ( strlen ( a [ i ] ) > strlen ( a [ j ] ) )
            {
                char aux [ 100 ] ;
                strcpy ( aux , a [ i ] ) ;
                strcpy ( a [ i ] , a [ j ] ) ;
                strcpy ( a [ j ] , aux ) ;
            }
            else
            if ( strlen ( a [ i ] ) == strlen ( a [ j ] ) )
                if ( strcmp ( a [ i ] , a [ j ] ) > 0 ) 
                {
                    char aux [ 100 ] ;
                    strcpy ( aux , a [ i ] ) ;
                    strcpy ( a [ i ] , a [ j ] ) ;
                    strcpy ( a [ j ] , aux ) ;
                }
    
    for ( int i = n - 1 ; i >= 0 ; i -- )
        printf ( "%s\n" , a [ i ] ) ;

    return 0 ;
}