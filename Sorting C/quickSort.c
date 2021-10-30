#include<stdio.h>
int swap(int* p, int* q) {
    int t = *p;
    *p = *q;
    *q = t;
}

int partition(int arr[], int start, int end) {
    int pivot = arr[end];
    int i = start-1;

    for(int j=start; j<end; j++) {
        if(arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[end]);
    return(i+1);
}


void quickSort(int arr[], int start, int end) {
    if(start < end) {
        int q = partition(arr, start, end);
        quickSort(arr, start, q-1);
        quickSort(arr, q+1, end);
    }
}

int main() {
    int arr[] = {8, 3, 6, 7, 1, 4, 2, 5, 10, 12}, n=10, i;
    quickSort(arr, 0, n-1);
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);

    return 0;
}