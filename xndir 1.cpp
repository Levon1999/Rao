#include<iostream>
int main() {
	int arr[4] = { 14,22,3,18 };
	int max = arr[0];
	for (int i = 0; i < 4; ++i) {
		if (arr[i] > max) {
			max = arr[i];
			std::cout << i;
		}
	}
}