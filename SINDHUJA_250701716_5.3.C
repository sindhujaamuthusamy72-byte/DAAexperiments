 #include <stdio.h>

int main() {
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        int m;
        scanf("%d", &m);
        int arr1[m];
        for (int i = 0; i < m; i++) {
            scanf("%d", &arr1[i]);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i] == arr1[j]) {
                printf("%d ", arr1[j]);
                }
            }
        }
    }
}
