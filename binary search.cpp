#include<iostream>
int main() {
	const int size = 5;
	int arr[size] = { 2,4,6,8,11 };
	int key = 0;
	std::cin >> key;
	int start = 0;
	int end = size - 1;
	while (start <= end) {
		int mid = (start + end) / 2;
		if (arr[mid] == key) {
			std::cout << mid;
			break;
		}
		if (arr[mid] < key) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
}