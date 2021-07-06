#include <iostream>
int main() {
	const int size = 5;
	int arr[size] = { 0 };
	int count = 0;
	for (int i = 0; i < 5; ++i) {
		std::cin >> arr[i];
		if (arr[i] % 2 == 1) {
			++count;
		}
	}
	std::cout << count;
}