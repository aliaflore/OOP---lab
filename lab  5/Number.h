class Number

{

private:

    char val [ 100 ] ;
    int baza ;

public:

   Number(const char * value, int base); // where base is between 2 and 16

   ~Number();

    /// COPY CONSTRUCTOR
    Number ( Number & d ) ;

    /// MOVE CONSTRUCTOR
    Number ( Number && d ) ;

    /// MOVE ASSIGNMENT OPERATOR
    Number & operator = ( Number && d ) ;
    Number & operator = ( char * p ) ;
    Number & operator = ( int nr ) ;

    /// OPERATORS
    friend Number operator + ( Number n1 , Number n2 ) ;
    friend Number operator - ( Number n1 , Number n2 ) ;
    int operator [] ( int numar ) ;
    bool operator > ( const Number &n ) ;
    bool operator < ( const Number &n ) ;
    bool operator <= ( const Number &n ) ;
    bool operator >= ( const Number &n ) ;
    bool operator == ( const Number &n ) ;
    Number operator -- () ;
    Number operator -- ( int n ) ;

   void SwitchBase(int newBase);

   void Print();

   int  GetDigitsCount(); // returns the number of digits for the current number

   int  GetBase(); // returns the current base

} ;