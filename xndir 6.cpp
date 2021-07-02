#include<iostream>
int sumArrays() {
	int arr[3] = { 10,50,90 };
	int azr[3] = { 21,30,6 };
	int sum = 0;
	for (int i = 0; i < 3; ++i) {
		sum = arr[i] + azr[i];
		std::cout << sum << std::endl;
	}
	return 1;
}
int main() {
	sumArrays();
}