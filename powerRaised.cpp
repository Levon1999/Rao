#include<iostream>
int calculatePower(int base, int powerRaised) {
	if (powerRaised < base) {
		return base;
	};
	return base * calculatePower(base ,--powerRaised);
}
int main() {
	std::cout << calculatePower(2, 5);
}