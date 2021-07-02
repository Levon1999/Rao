#include<iostream>
int main() {
	int arr[5] = { 12,31,48,65,4 };
	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < 5; ++i) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	for (int ix = 0; ix < 5; ++ix) {
		if(arr[ix]<min){
			min = arr[ix];
		}
	}
	std::cout << max + min;
}