#include<iostream>
int main() {
	int ar[5] = { 11,34,3,7,86 };
	int arr[5] = { 37,2,99,12,4 };
	int mul = 0;
	for (int i = 0; i <= 4; ++i) {
		mul = ar[i] * arr[i];
		std::cout << mul << std::endl;
	}
}