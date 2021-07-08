#include<iostream>
int fact(int num) {
	if (num == 0 || num == 1) {
		return 1;
	}
	return num * fact(num - 1);
}
int main() {
	int num = 0;
	std::cin >> num;
	std::cout << fact(num);
}