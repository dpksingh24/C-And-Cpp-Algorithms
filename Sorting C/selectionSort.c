#include<stdio.h>

int selectionSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[i]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 3, 4}, n=5;
    selectionSort(arr, n);

    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    return 0;
}