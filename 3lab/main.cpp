
#include <iostream>

int setBit(int x, int i) {
    if(x <= 0 || x >= 1000000000) {
        return -1;
    }
    
    return x | (1 << i);
}

int main() {
    int x, i;
    std::cout << "Enter x (0 < x < 1000000000): ";
    std::cin >> x;
    
    std::cout << "Enter i: ";
    std::cin >> i;
    
    int result = setBit(x, i);
    
    if(result == -1) {
        std::cout << "Input error. x must be between 0 and 1000000000." << std::endl;
    } else {
        std::cout << "Result: " << result << std::endl;
    }
    
    return 0;
}
