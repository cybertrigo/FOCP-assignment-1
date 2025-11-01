#include <stdio.h>
#include <math.h>

int main() {
    int n,i,j;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int c=0;
    for (i=0;i<n;i++) {
        int num=arr[i];
        int a=1;
        if (num<=1) 
        a=0;
        else if (num==2) 
        a=1;
        else if (num%2==0)
        a=0;
        else {
            for (j=3;j<=sqrt(num);j+=2) {
                if (num%j==0) {
                    a=0;
                    break;
                }
            }
        }
        if (a==1) c++;
    }
    printf("number of prime numbers: %d\n", c);
    return 0;
}