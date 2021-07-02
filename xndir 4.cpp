#include <iostream>
int main() {
	int arr[5] = { 10,3,45,36,88 };
	for (int i = 4; i >= 0; --i) {
		std::cout << arr[i] << std::endl;
	}
}