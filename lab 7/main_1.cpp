#include <iostream>

using namespace std ;

float operator"" _Kelvin ( unsigned long long int x )
{
    float y = ( float ) x ;
    return ( y - 272.15 ) ;
}

float operator"" _Fahrenheit ( unsigned long long int x )
{
    float y = ( float ) x ;
    y = ( y - 32 ) / 1.8 ;
    return y ;
}

int main ()
{
    float a = 300_Kelvin ;
    float b = 120_Fahrenheit ;
    cout << b ;
    return 0 ;
}