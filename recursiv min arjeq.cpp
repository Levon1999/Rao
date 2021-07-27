#include<iostream>
void rec(int* arr, int n) {
	static int min = *arr;//static veragrum e mi angam amen recursiv kanchi yntacqum
	if (!n) {
		std::cout << min << std::endl;
		return;
	};
	if (min > *arr) {
		min = *arr;
	}
	return rec(arr + 1, n - 1);
}
int main() {
	int n = 0;
	std::cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	};
	rec(arr, n);
	delete[]arr;
	arr = nullptr;
}