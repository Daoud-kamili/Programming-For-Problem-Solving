#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = i + 1;
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    free(arr);
    return 0;
}