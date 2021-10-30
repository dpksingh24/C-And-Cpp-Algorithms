#include<stdio.h>

int binarySearch(int arr[], int start, int end, int elem) {
    if(start < end) {
        int mid = (start+end) / 2;
        if(arr[mid] == elem)
            return mid;
        if(arr[mid] > elem)
            return binarySearch(arr, 0, mid-1, elem);
        return binarySearch(arr, mid+1, end, elem);
    }
    return -1;
}

int main() {
    int arr[] = {5, 7, 8, 9, 15}, n=5, elem;
    printf("Enter element to search in array : ");
    scanf("%d", &elem);
    int index = binarySearch(arr, 0, n, elem);
    if(index >= 0)
        printf("%d found at %d", elem, index);
    else
        printf("%d not Found", elem);
    return 0;
}