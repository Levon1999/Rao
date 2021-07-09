#include<iostream>
int main() {
	int matrix[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int arr[9] = { 0 };
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			arr[8] = matrix[i][j];
			std::cout << arr[8];
		}
	}
}