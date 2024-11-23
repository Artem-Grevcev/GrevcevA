#include <iostream>
#include <vector>
#include <algorithm>



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
