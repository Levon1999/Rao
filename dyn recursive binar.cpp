#include<iostream>
int binsea(int arr[], int start, int end, int key) {
	if (start <= end) {
		int mid = (start + end) / 2;
		if (arr[mid] == key)
			return mid;
		if (arr[mid] > key)
			return binsea(arr, start, mid - 1, key);
		return binsea(arr, mid + 1, end, key);
	}
	return -1;
}

int main() {
	std::cout << "Enter sizeof array ";
	int s = 0;
	std::cin >> s;
	int* arr = new int[s];
	std::cout << "elements of array ";
	for (int i = 0; i < s; ++i) {
		std::cin >> arr[i];
	};
	int key = 0;
	std::cout << "Enter number for search ";
	std::cin >> key;
	int result = binsea(arr, 0, s, key);
	std::cout << result;
}