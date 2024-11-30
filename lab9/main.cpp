#include <iostream>

int main() {
    int number;
    std::cout << "Введите целое число: ";
    std::cin >> number;

    // Создаем указатель на число
    unsigned char* bytePointer = reinterpret_cast<unsigned char*>(&number); //указывает на адрес памяти числ   

    std::cout << "Содержимое байтов числа " << number << ":\n";
    for (size_t i = 0; i < sizeof(int); ++i) {                 //ит. преобразование в инт для нагл
        std::cout << "Байт " << i << ": " << static_cast<int>(bytePointer[i]) << "\n";
    }

    return 0;
}
