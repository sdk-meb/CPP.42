#include <Fixed.hpp>

int main( void ) {
    Fixed   a;

    std::cout << "a is " << a << std::endl;
    std::cout << "a is " << a.toFloat() << " as float" << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;

    a = Fixed( 1234.4321f );
    std::cout << "a is " << a << std::endl;
    std::cout << "a is " << a.toFloat() << " as float" << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;

    a = Fixed(2147483646);
    std::cout << "a is " << a << std::endl;
    std::cout << "a is " << a.toFloat() << " as float" << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    return 0;
}
