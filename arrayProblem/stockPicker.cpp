
#include <iostream>
#include <string>
using namespace std;

int StockPicker(int arr[], int size) {
	int value;
	int high = -1;
	for (int x = 0; x < size-1; x++){
		for (int y = x+1; y < size; y++) {
			if (arr[x] < arr[y]) {
				value = arr[y] - arr[x];
				if (value > high)
					high = value;
			}
		}
	}
	return high;
}
int main() {
	int A[] = { 10, 12, 4, 5, 9 };
	int B[] = { 14, 20, 4, 12, 5, 11 };
	int C[] = { 44, 30, 24, 32, 35, 30, 40, 38, 15 };
	int D[] = { 10, 9, 8, 2 };
	cout << StockPicker(A, sizeof(A) / sizeof(A[0])) << endl; // 5
	cout << StockPicker(B, sizeof(B) / sizeof(B[0])) << endl; // 8
	cout << StockPicker(C, sizeof(C) / sizeof(C[0])) << endl; // 16
	cout << StockPicker(D, sizeof(D) / sizeof(D[0])) << endl; // -1
	return 0;
}
