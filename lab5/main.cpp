#include <iostream>
#include <vector>
int main() {
    int N=0;
    std::cout << "Введите натуральное число N: ";
    std::cin >> N;

    int product = 1;
    while (N > 1 || N<1000000000) {
        int digit = N % 10;
        if (digit % 2 == 0) {
            product *= digit;
        }
        N /= 10;
    }

    std::cout << "Произведение чётных цифр числа N: " << product << std::endl;

    return 0;
}
