#include<iostream>
int countBits(int n) {
	return n == 0 ? 0 : (n & 1) + countBits(n >> 1);
	/*if (n == 0) {
		return 0;
	}
	else {
		return(n & 1) + countBits(n >> 1);
	}*/
}
int main() {
	int n = 0;
	std::cin >> n;
	std::cout << countBits(n);
}