#include "Mazda.h"

int Mazda :: fuel_capacity ()
{
    return 230 ;
}

int Mazda :: fuel_consumption ()
{
    return 13 ;
}

int Mazda :: average_speed ( Weather x )
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


const char * Mazda :: name ()
{
    return "Mazda" ;
}