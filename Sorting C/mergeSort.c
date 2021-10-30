#include<stdio.h>

void merge(int arr[], int start, int mid, int end) {
    int i, j, k;
    int n1 = mid-start+1, n2 = end-mid;
    int L[n1], R[n2];

    for(i=0; i<n1; i++)
        L[i]=arr[start+i];
    for(j=0; j<n2; j++)
        R[j]=arr[mid+j+1];

    i=0; j=0; k=start;

    while (i<n1 && j<n2) {
        if(L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i<n1)
        arr[k++] = L[i++];
    while (j<n2)
        arr[k++] = R[j++];
}

void mergeSort(int arr[], int start, int end) {
    if(start<end) {
        int mid = (start+end)/2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}

int main() {
    int arr[] = {6, 3, 7, 5, 1}, n=5, i;
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    mergeSort(arr, 0, n-1);
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    return 0;
}