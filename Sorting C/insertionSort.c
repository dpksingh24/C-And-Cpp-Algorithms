#include<stdio.h>

int insertionSort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int current = arr[i];
        int j=i-1;
        while (arr[j]>current && j>=0) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}

int main() {
    int arr[] = {5, 2, 8, 3, 4}, n=5;
    insertionSort(arr, n);

    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    return 0;
}