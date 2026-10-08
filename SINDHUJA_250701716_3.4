#include <stdio.h>
int element1, element2;
int binarySearch(int arr[], int low, int high, int key){
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == key)
        return mid;
    if (arr[mid] > key)
        return binarySearch(arr, low, mid - 1, key);
    return binarySearch(arr, mid + 1, high, key);
}

int findPair(int arr[], int n, int x, int i){
    if (i >= n - 1)
        return 0;
    int required = x - arr[i];
    int pos = binarySearch(arr, i + 1, n - 1, required);
    if (pos != -1){
        element1 = arr[i];
        element2 = arr[pos];
        return 1;
    }
    return findPair(arr, n, x, i + 1);
}

int main(){
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &x);
    if (findPair(arr, n, x, 0)){
        printf("%d\n", element1);
        printf("%d\n", element2);
    }
    else
        printf("No\n");
    return 0;
}