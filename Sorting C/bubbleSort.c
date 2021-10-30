#include<stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(arr[j] < arr[i]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }

    }

}

int main() {
    int arr[] = {5, 2, 8, 3, 4}, n=5;
    bubbleSort(arr, n);

    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    return 0;
}