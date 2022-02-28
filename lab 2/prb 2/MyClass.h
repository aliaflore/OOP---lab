#pragma once
class MyClass 
{

private: 
    char nume [ 100 ] ;
    float nota_eng ;
    float nota_istorie ;
    float nota_mate ;

public:
    MyClass () ; // constructorul 
    void setName ( char numele [ 100 ] ) ;
    char* getName () ;

    void setNota_Engleza ( int nota ) ;
    float getNota_Engleza () ;

    void setNota_Istorie ( int nota ) ;
    float getNota_Istorie () ;

    void setNota_Mate ( int nota ) ;
    float getNota_Mate () ;

    float average () ;   
};