#include<iostream>
int main() {
	int sum = 0;
	int mul = 1;
	int mid = 0;
	int arr[] = { 10,15,20,25 };
	for (int i = 0; i < 4; ++i) {
		sum += arr[i];
		mul *= arr[i];
	}
	mid = (sum + mul) / 2;
	std::cout << sum << std::endl;
	std::cout << mul << std::endl;
	std::cout << mid;
}