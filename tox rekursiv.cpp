#include<iostream>
int tmp = 0;
int getlen(const char* str) {
	if (*str == '\0') {
		return 0;
	}
	return 1 + getlen(++str);
}
int main() {
	const char* st = "germania";
	std::cout << getlen("germania");
}