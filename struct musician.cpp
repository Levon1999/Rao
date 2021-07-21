#include<iostream>
#include<string>
struct Musician {
	std::string name;
	short age;
	std::string instr;
};
int main() {
	int n = 0;
	std::cout << "Enter a number of Musicians " << std::endl;
	std::cin >> n;
	Musician* arr = new Musician[n];
	for (int i = 0; i < n; ++i) {
		std::cout << "Enter name, age and instrument for Muiscian " << std::endl;
		std::cin >> arr[i].name
			>> arr[i].age
			>> arr[i].instr;
	}
	delete[] arr;
	arr = nullptr;
}