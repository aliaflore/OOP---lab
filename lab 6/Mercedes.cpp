#include "Mercedes.h"

int Mercedes :: fuel_capacity ()
{
    return 210 ;
}

int Mercedes :: fuel_consumption ()
{
    return 14 ;
}

int Mercedes :: average_speed ( Weather x )
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

const char * Mercedes :: name ()
{
    return "Mercedes" ;
}