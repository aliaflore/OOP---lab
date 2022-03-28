#include "Toyota.h"

int Toyota :: fuel_capacity ()
{
    return 215 ;
}

int Toyota :: fuel_consumption ()
{
    return 9 ;
}

int Toyota :: average_speed ( Weather x )
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

const char * Toyota :: name ()
{
    return "Toyota" ;
}