#include <iostream>
#include <vector>
#include <algorithm>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool compareRows(const std::vector<int>& row1, const std::vector<int>& row2) {
    int sum1 = 0, sum2 = 0;
    for (int num : row1) {
        sum1 += sumOfDigits(num);
    }
    for (int num : row2) {
        sum2 += sumOfDigits(num);
    }
    return sum1 < sum2;
}

void sortMatrixRows(std::vector<std::vector<int>>& matrix) {
    std::sort(matrix.begin(), matrix.end(), compareRows);
}

int main() {
   int n;
   std::cout << "Enter the size of the matrix: ";
   std::cin >> n;

   std::vector<std::vector<int>> matrix(n, std::vector<int>(n));

   std::cout << "Enter the elements of the matrix:\n";
   for (int i = 0; i < n; ++i) {
       for (int j = 0; j < n; ++j) {
           std::cin >> matrix[i][j];
       }
   }

   sortMatrixRows(matrix);

   std::cout << "Sorted matrix rows by the sum of digits of elements:\n";
   for (const std::vector<int>& row : matrix) {
       for (int num : row) {
           std::cout << num << " ";
       }
       std::cout << std::endl;
   }

   return 0;
}