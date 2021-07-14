#include<iostream>
int main() {
	int num = 0;
	std::cin >> num;
	while (num >= 0) {
		std::cout << num << std::endl;
		--num;
	}
}