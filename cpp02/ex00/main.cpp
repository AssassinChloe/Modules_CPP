#include "Fixed.hpp"

int main( void )
{
    std::cout << "     *** Test default constructor for object a ***" << std::endl; 
    
    Fixed a;

    std::cout << std::endl << "     *** Test a.getRawBits (default value of _raw_bit is 0) ***" << std::endl; 

    std::cout << "a : " << a.getRawBits() << std::endl;

    std::cout << std::endl << "     *** Test a.setRawbits(42) ***" << std::endl; 

    a.setRawBits(42);

    std::cout << std::endl << "     *** Test copy constructor b(a) ***" << std::endl; 

    Fixed b( a );
    
    std::cout << std::endl << "     *** Test assignation operator Fixed c = b ***" << std::endl; 

    Fixed c;
    c = b;

    std::cout << std::endl << "     *** Test the copy worked (all values should be 42)***" << std::endl; 

    std::cout << "a : " << a.getRawBits() << std::endl;
    std::cout << "b : " << b.getRawBits() << std::endl;
    std::cout << "c : " << c.getRawBits() << std::endl;

    return 0;
}