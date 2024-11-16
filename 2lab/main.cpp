#include <iostream>

int main() {
    int A, B, C;
    std::cout << "Enter the sides of the rectangular parallelepiped (A B C): ";
    std::cin >> A >> B >> C;
    
    if (A >= 0 && A <= 3*10000 && B >= 0 && B <= 3*10000 && C >= 0 && C <= 3*10000) {
        int diagonal = sqrt(A*A + B*B + C*C);
        std::cout << "The main diagonal of the rectangular parallelepiped is: " << diagonal << std::endl;
    } else {
        std::cout << "Invalid input. Sides should be integers between 0 and 3*10^4." << std::endl;
    }
    
    return 0;
}
