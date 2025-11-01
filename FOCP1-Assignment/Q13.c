#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d elements: ",n);
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int index = -1;
    if (n == 1 || arr[0] >= arr[1]) 
        index = 0;
    else {
        for (i = 1; i < n - 1; i++) {
            if (arr[i]>=arr[i-1] && arr[i]>=arr[i+1]) {
                index=i;
                break;
            }
        }
    }
    if (index==-1)
        index=n-1;
    printf("peak element is %d at index %d\n", arr[index],index);
    return 0;
}
