
// типы данных
//1.целочисленные
// char, 1 байт ,-128..127
// short,2 байта,-32768..32767
// int,4 байта, -2^31..2^31-1
// long long,8,-2^63..2^63-1
// unsigned int,4,0..2^32-1
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