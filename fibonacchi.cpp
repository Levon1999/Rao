#include<iostream>
int main() {
	int n = 0;
	int fib = 0;
	int t = 1;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		int sum = fib + t;
		fib = t;
		t = sum;
	}
	std::cout << t;
}