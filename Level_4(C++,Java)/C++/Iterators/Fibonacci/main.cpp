#include <iostream>
#include "FiboIterator.h"

int main() {
    FiboIterator it(-10);
    
    for ( ; !it.end(); it++ ) {
        std::cout << ' ' << *it;
    }
    
    std::cout << std::endl;
    
    for ( ; !it.begin(); it-- ) {
        std::cout << ' ' << *it;
    }
    
    std::cout << std::endl;
    
    for ( ; !it.end(); it++ ) {
        std::cout << ' ' << *it;
    }
    
    std::cout << std::endl;
    
    std::cout << *it << std::endl;
    
    it.reset();
    
    it++;
    it++;
    it++;
    it--;
    // it--;
    // it--;
    
    std::cout << *it << std::endl;
    
    return 0;
}