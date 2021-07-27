#include<iostream>
struct paper {
	int length;
	int high;
};
void rec(paper* arr, int n) {
	static paper min = *arr;//static veragrum e mi angam amen recursiv kanchi yntacqum
	if (!n) {
		std::cout << min.high << std::endl;
		return;
	};
	if (min.high > arr->high) {
		min = *arr;
	}
	return rec(arr + 1, n - 1);
}
int main() {
	int n = 0;
	std::cin >> n;
	paper* arr = new paper[n];
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i].length
			>> arr[i].high;
	};
	rec(arr, n);
	delete[]arr;
	arr = nullptr;
}