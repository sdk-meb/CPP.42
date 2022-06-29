// #include <Fixed.hpp>

// int main( void ) {
   
//     Fixed a;
//     Fixed const b( 10 );
//     Fixed const c( 42.42f );
//     Fixed const d( b );
//     a = Fixed( 1234.4321f );
//     std::cout << "a is " << a << std::endl;
//     std::cout << "b is " << b << std::endl;
//     std::cout << "c is " << c << std::endl;
//     std::cout << "d is " << d << std::endl;
//     std::cout << "a is " << a.toInt() << " as integer" << std::endl;
//     std::cout << "b is " << b.toInt() << " as integer" << std::endl;
//     std::cout << "c is " << c.toInt() << " as integer" << std::endl;
//     std::cout << "d is " << d.toInt() << " as integer" << std::endl;


//     return 0;
// }

#include <iostream>
#include <limits>

using namespace std;

template<typename T>
void showMinMax() {
   cout << "min: " << numeric_limits<T>::min() << endl;
   cout << "max: " << numeric_limits<T>::max() << endl;
   cout << endl;
}

int main() {

   cout << "short:" << endl;
   showMinMax<short>();
   cout << "int:" << endl;
   showMinMax<int>();
   cout << "long:" << endl;
   showMinMax<long>();
   cout << "float:" << endl;
   showMinMax<float>();
   cout << "double:" << endl;
   showMinMax<double>();
   cout << "long double:" << endl;
   showMinMax<long double>();
   cout << "unsigned short:" << endl;
   showMinMax<unsigned short>();
   cout << "unsigned int:" << endl;
   showMinMax<unsigned int>();
   cout << "unsigned long:" << endl;
   showMinMax<unsigned long>();
}