#include<iostream>
#include<utility>
#include<string>
std::pair<std::string, double> foo(std::string str, double x) {
	std::pair<std::string, double>Product1;
	Product1 = std::make_pair(str, x);
	std::cout << str << std::endl;
	std::cout << x;
	return Product1;
}
int main() {
	std::cout << "Enter product name and price " << std::endl;
	std::string x;
	getline(std::cin, x);
	double a = 0;
	std::cin >> a;
	foo(x, a);
}