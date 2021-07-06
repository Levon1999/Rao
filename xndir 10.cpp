#include <iostream>
int main() {
	int matrix[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int col = 0;
	int row = 0;
	for (int i = 0; i < 3; ++i) {
		col= matrix[i][i];
		row= matrix[i][2 - i];
		std::swap(col, row);
		std::cout << col << " ";
		std::cout << row << std::endl;
	}
}