#include<stdio.h>

int linearSearch(int arr[], int elem, int n) {
    for(int i=0; i<n; i++) {
        if(arr[i] == elem)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {5, 7, 4, 3, 8}, n=5, elem;
    printf("Enter element to search in array : ");
    scanf("%d", &elem);
    int index = linearSearch(arr, elem, n);
    if(index >= 0)
        printf("%d found at %d", elem, index);
    else
        printf("%d not Found", elem);

    return 0;
}