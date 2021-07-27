#include<iostream>
char* reverse(char* arr) {
	int tmp = 0;
	char* s = arr;
	while (*s != '\0') {
		++s;
		++tmp;
	}
	for (int i = 0; i < tmp; ++i) {
		char count = arr[i];
		arr[i] = arr[tmp - 1];
		arr[tmp - 1] = count;
		--tmp;
	}
	return s;
}
int main() {
	char arr[20] = { 0 };
	std::cin >> arr;
	reverse(arr);
	std::cout << arr;
}