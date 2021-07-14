#include<iostream>
void foo(int num) {
	if (num < 0) { return; };
	std::cout << num;
	foo(num - 1);
}
int main() {
	int num = 0;
	std::cin >> num;
	 foo(num);
}