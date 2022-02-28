#include "Global.h"
#include <string.h>

int compara_n_eng ( MyClass * e1, MyClass * e2 ) 
{
	if ( e1-> getNota_Engleza () < e2 -> getNota_Engleza () )
		return -1;
	if ( e1 -> getNota_Engleza () == e2 -> getNota_Engleza () )
		return 0;
	if ( e1 -> getNota_Engleza () > e2 -> getNota_Engleza () )
		return 1;
}

int compara_n_istorie ( MyClass * e1, MyClass * e2 ) 
{
	if ( e1-> getNota_Istorie () < e2 -> getNota_Istorie () )
		return -1;
	if ( e1 -> getNota_Istorie () == e2 -> getNota_Istorie () )
		return 0;
	if ( e1 -> getNota_Istorie () > e2 -> getNota_Istorie () )
		return 1;
}

int compara_n_mate ( MyClass * e1, MyClass * e2 ) 
{
	if ( e1-> getNota_Mate () < e2 -> getNota_Mate () )
		return -1 ;
	if ( e1 -> getNota_Mate () == e2 -> getNota_Mate () )
		return 0 ;
	if ( e1 -> getNota_Mate () > e2 -> getNota_Mate () )
		return 1 ;
}

int compara_average ( MyClass * e1, MyClass * e2 ) 
{
	if ( e1-> average () < e2 -> average () )
		return -1 ;
	if ( e1 -> average () == e2 -> average () )
		return 0 ;
	if ( e1 -> average () > e2 -> average () )
		return 1 ;
}

int compara_numele ( MyClass * e1, MyClass * e2 ) 
{
	if ( strcmp ( e1-> getName () , e2 -> getName () ) < 0 )
		return -1 ;
	if ( strcmp ( e1-> getName () , e2 -> getName () ) == 0 )
		return 0 ;
	if ( strcmp ( e1-> getName () , e2 -> getName () ) > 0 )
		return 1 ;
}

