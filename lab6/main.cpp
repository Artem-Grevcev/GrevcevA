//1
#include <iostream>
#include <algorithm>
bool areDigitsEqual(int num) {                //ф равенства/неравенства
    int lastDigit = num % 10;
    while (num > 0) {
        if (num % 10 != lastDigit) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main() {
    int n;
    std::cout << "введите размер массива ";                                   //разм м
    std::cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cout << "введите числа в массив ";
        std::cin >> arr[i];
    }
    
    bool hasEqualDigits = false;
    for (int i = 0; i < n; i++) {
        if (areDigitsEqual(arr[i])) {                             //проверка на равенство цифр числа
            hasEqualDigits = true;
            break;
        }
    }
    
    if (!hasEqualDigits) {
        std::sort(arr, arr + n, std::greater<int>());            //сортировка массивов по убыванию
    }
    
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}
//2
#include <iostream>
#include <algorithm>

int sumOfDigits(int num) {                           //ф нахождения суммы цифр числа
    int sum = 0;
    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool compare(int a, int b) {                        //сортировка массива
    int sumA = sumOfDigits(a);
    int sumB = sumOfDigits(b);
    if (sumA == sumB) {
        int maxA = *std::max_element(std::to_string(a).begin(), std::to_string(a).end());
        int maxB = *std::max_element(std::to_string(b).begin(), std::to_string(b).end());
        if (maxA == maxB) {
            return a < b;
        }
        return maxA < maxB;
    }
    return sumA < sumB;
}

int main() {
    int n;
    std::cout << "введите размер массива ";
    std::cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cout << "введите числа в массив ";
        std::cin >> arr[i];
    }
    
    std::sort(arr, arr + n, compare);
    
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}
//3
#include <iostream>

int main() {
    int n=0 , m=0;
    std::cout << "введите колличество строк и столбцов";
    std::cin >> n >> m;
    
    int arr[n][m];                        //дв м
    int maxSumRow = 0;
    int maxRowIndex = 0;
    
    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < m; j++) {
            std::cin >> arr[i][j];
            rowSum += arr[i][j];         
        }
        if (rowSum > maxSumRow) {                   
            maxSumRow = rowSum;
            maxRowIndex = i;             //вычисляется сумма элементов в каждой строке
        }                                // находится макс сумма 
    }
    
    for (int j = 0; j < m; j++) {
        arr[maxRowIndex][j]++;           //увеличение на 1 
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << arr[i][j] << " ";   
        }
        std::cout << std::endl;
    }
    
    return 0;
}
//4
#include <iostream>
#include <vector>
#include <algorithm>

bool isPalindrome(int num) {                           //ф переворот числа 
    int temp = num;
    int reverseNum = 0;
    while (temp != 0) {
        reverseNum = reverseNum * 10 + temp % 10;
        temp = temp / 10;
    }
    return reverseNum == num;
}

int main() {
    int n =0;
    std::cout << "введите колличество чисел";
    std::cin >> n;
    
    std::vector<int> seq;
    
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "введите числа";
        std::cin >> num;
        seq.push_back(num);           //ввод числа в вектор
    }
    
    seq.erase(std::remove_if(seq.begin(), seq.end(), 
        [](int num) { return (num % 10 + num / 10) == 10; }), seq.end()); //проверка на палиандропность
    
    std::vector<int> palindromes;       
    for (int num : seq) {
        if (isPalindrome(num)) {
            palindromes.push_back(num); 
        }
    }
    
    for (int num : seq) {
        std::cout << num << " ";
    }
    for (int palindrome : palindromes) {
        std::cout << palindrome << " " << palindrome << " ";
    }
    
    return 0;
}
