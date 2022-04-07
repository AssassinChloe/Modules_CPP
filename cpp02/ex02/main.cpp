#include "Fixed.hpp"

int main( void )
{
    std::cout << "     *** Instanciating : a (default constructor) ***" << std::endl; 

    Fixed a;

    std::cout << std::endl << "     *** Instanciating : const b(Fixed(5.05f) * Fixed (2)) ***" << std::endl;

    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << "b is " << b << std::endl;
    
    std::cout << std::endl << "     *** Incremetation/Decrementation of a ***" << std::endl; 

    std::cout << "  a is " << a << std::endl;
    std::cout << "++a is " << ++a << std::endl;
    std::cout << "  a is " << a << std::endl;
    std::cout << "a++ is " << a++ << std::endl;
    std::cout << "  a is " << a << std::endl;
    std::cout << "--a is " << --a << std::endl;
    std::cout << "  a is " << a << std::endl;
    std::cout << "a-- is " << a-- << std::endl;
    std::cout << "  a is " << a << std::endl;

    std::cout << std::endl << "     *** a.setRawBits(54872) ***" << std::endl; 
    a.setRawBits(54872);
    std::cout << "a is " << a << std::endl;
    
    std::cout << std::endl << "max between a & b = " << Fixed::max( a, b ) << std::endl;
    std::cout << "min between a & b = " << Fixed::min( a, b ) << std::endl << std::endl;
    
    Fixed c = a * b;
    std::cout << a << " * " << b << " = " << c << std::endl;
    
    c = a / b;
    std::cout << a << " / " << b << " = " << c << std::endl;
    
    c = a + b;
    std::cout << a << " + " << b << " = " << c << std::endl;
    
    c = a - b;
    std::cout << a << " - " << b << " = " << c << std::endl;

return 0;
}