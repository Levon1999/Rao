#include <iostream>
int ConsoleOutput(int num) {
	std::cout << " Multiply and minus for this number " << std::endl;
	std::cout << " Doing minus by 5 = " << num - 5 << std::endl;
	std::cout << " Doing multiply by 5 = " << num * 5 << std::endl;
	return 0;
}
int main() {
	std::cout << "Please enter a number " << std::endl;
	int num = 0;
	std::cin >> num;
	ConsoleOutput(num);
}