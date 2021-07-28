#include <iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int key)
{
    if (start<=end) {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            return binarySearch(arr, start, mid - 1, key);
        return binarySearch(arr, mid + 1, end, key);
    }
    return -1;
}

int main ()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int key = 0;
    cin >> key;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n, key);
    cout << "Element is not present in array " << result;
    return 0;
}