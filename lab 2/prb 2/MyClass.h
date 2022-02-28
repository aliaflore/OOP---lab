class MyClass 
{

private: 
    char nume [ 100 ] ;
    int nota_eng ;
    int nota_istorie ;
    int nota_mate ;

public:
    MyClass () ; // constructorul 
    void setName ( char numele [ 100 ] ) ;
    char getName () ;

    void setNota_Engleza ( int nota ) ;
    int getNota_Engleza () ;

    void setNota_Istorie ( int nota ) ;
    int getNota_Istorie () ;

    void setNota_Mate ( int nota ) ;
    int getNota_Mate () ;

    float average () ;   
};