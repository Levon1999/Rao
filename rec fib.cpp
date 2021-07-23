#include<iostream>
int rec(int n) {
	return n == 1 || n == 0 ? 1 : rec(n - 1) + rec(n - 2);
}
int main() {
	int s = 0;
	std::cin >> s;
	std::cout << rec(s);
}