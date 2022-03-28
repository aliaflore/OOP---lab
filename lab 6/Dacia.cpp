#include "Dacia.h"

int Dacia :: fuel_capacity ()
{
    return 250 ;
}

int Dacia :: fuel_consumption ()
{
    return 10 ;
}

int Dacia :: average_speed ( Weather x )
{
    switch ( x )
    {
    case Weather :: rain :
        return 50 ;
    case Weather :: sunny :
        return 170 ;
    case Weather :: snow :
        return 30 ;
    default :
        break ;
    }
}

const char * Dacia :: name ()
{
    return "Dacia" ;
}