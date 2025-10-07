#include <stdio.h>
int main() {
    int arr[20], n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    n--; // remove last
    printf("Array: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}
