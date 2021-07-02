#include <iostream>
int main() {
	int arr[5] = { 14,61,33,57,8 };
	int min = arr[0];
	for (int i = 0; i < 5; ++i) {
		if (arr[i] < min) {
			min = arr[i];
			std::cout << i;
		}
	}
}