#include<iostream>
int main() {
	const int size = 7;
	int arr[size] = { 0 };
	int temp = 0;
	for (int ix = 0; ix <= 6; ++ix) {
		std::cin >> arr[ix];
		if (arr[ix] % 2 == 0) {
			++temp;
		}
	}
	std::cout << temp;
}