#include <stdio.h>

int main() {
    int n,i,e,a,index;
    int arr[100];
    
    printf("enter the number of elements: ");
    scanf("%d", &n);
   
    printf("enter %d elements: ", n);
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("array before insertion: ");
    for (i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("enter the element to insert: ");
    scanf("%d",&e);
    printf("enter position (0: front, 1: middle, 2: end): ");
    scanf("%d",&a);
    
    int c=n+1;
    switch (a) {
        case 0:
            index=0;
            for (i=n;i>0;i--) {
                arr[i]=arr[i-1];
            }
            arr[0]=e;
            break;
        case 1:
            index=n/2;
            for (i=n;i>index;i--) {
                arr[i]=arr[i-1];
            }
            arr[index]=e;
            break;
        case 2:
            index=n;
            arr[n]=e;
            break;
    }
    printf("array after insertion: ");
    for (i=0;i<c;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
