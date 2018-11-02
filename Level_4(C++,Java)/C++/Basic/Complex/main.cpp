#include <iostream>
#include "Complex.h"

int main() {
    Complex x(2, -7);
    Complex y(3, -8);
    Complex z;

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;

    if ( x == y ) {
       std::cout << x << " is equal to " << y << std::endl;
    } else {
       std::cout << x << " is not equal to " << y << std::endl;
    }
    
    z = x * y;
    
    std::cout << z<< std::endl;
    
    return 0;
}