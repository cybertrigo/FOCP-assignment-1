#include <stdio.h>

int main() {
    int n,i;
    printf("enter the number of scores:");
    scanf("%d",&n);
    
    int arr[n];
    printf("enter %d scores: ", n);
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int ec=0,oc=0;
    for (i=0;i<n;i++) {
        if (arr[i]%2==0) {
            ec++;
        } else {
            oc++;
        }
    }
    int earr[ec];
    int oarr[oc];
    int eindex=0,oindex=0;
    for (i=0;i<n;i++) {
        if (arr[i]%2==0)
        earr[eindex++]=arr[i];
        else
            oarr[oindex++]=arr[i];
    }
    printf("\neven scores:");
    for (i=0;i<ec;i++) {
        printf("%d ",earr[i]);
    }
    printf("\nodd scores:");
    for (i=0;i<oc;i++) {
        printf("%d ",oarr[i]);
    }
    printf("\n");
    
    return 0;
}