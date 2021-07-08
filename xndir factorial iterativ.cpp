#include <iostream>
int main() {
	int n = 0;
	std::cin >> n;
	int fact = 1;
	for (int i = 1; i <= n; ++i)
		fact = fact * i;
	std::cout  << fact;
}