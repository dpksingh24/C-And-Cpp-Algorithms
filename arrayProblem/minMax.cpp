#include <bits/stdc++.h>
using namespace std;

int MaxFun(int arr[], int size) {
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int MinFun(int arr[], int size) {
    int min = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()  {
    int arr[] = { 1, 2 ,50, 99, 100 };
    int size =  sizeof(arr) / sizeof(arr[0]);

    cout << MinFun(arr, size) << " " ;
    cout << MaxFun(arr, size) << " ";

    return 0;
}