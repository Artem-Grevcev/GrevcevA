//ЗАДАНИЕ 1
#include <iostream>

int main() {
    int A, B, C;
    
    std::cout << "Enter A: ";
    std::cin >> A;
    
    std::cout << "Enter B: ";
    std::cin >> B;
    
    std::cout << "Enter C: ";
    std::cin >> C;
    
    if (A % B == 0) {
        if (B > C) {
            std::cout << A/B+C;
        } else if (B < C) {
            std::cout << A/B-C;
        } else {
            std::cout << (A+B)*C;
        }
    } else {
        std::cout << (A+B)*C;
    }
    
    return 0;
}
//ЗАДАНИЕ 2
#include <iostream>

int main() {
    int N;
    
    std::cout << "Enter a number (1-7): ";
    std::cin >> N;
    
    switch (N) {
        case 1:
            std::cout << "Monday";
            break;
        case 2:
            std::cout << "Tuesday";
            break;
        case 3:
            std::cout << "Wednesday";
            break;
        case 4:
            std::cout << "Thursday";
            break;
        case 5:
            std::cout << "Friday";
            break;
        case 6:
            std::cout << "Saturday";
            break;
        case 7:
            std::cout << "Sunday";
            break;
        default:
            std::cout << "Error: Invalid input";
    }
    
    return 0;
}
//ЗАДАНИЕ 3
#include <iostream>

int main() {
    int x;
    
    std::cout << "Enter a number (-1 or 1): ";
    std::cin >> x;
    
    if (x == -1) {
        std::cout << "Negative number";
    } else if (x == 1) {
        std::cout << "Positive number";
    } else {
        std::cout << "Error: Invalid input";
    }
    
    return 0;
}
