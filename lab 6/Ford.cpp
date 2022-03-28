#include "Ford.h"

int Ford :: fuel_capacity ()
{
    return 225 ;
}

int Ford :: fuel_consumption ()
{
    return 12 ;
}

int Ford :: average_speed ( Weather x )
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

const char * Ford :: name ()
{
    return "Ford" ;
}