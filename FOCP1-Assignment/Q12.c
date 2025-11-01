#include <stdio.h>

int main() {
    int n,i;
    printf("enter the number of scores: ");
    scanf("%d",&n);
    int sc[n];
    printf("enter %d scores: ", n);
    for (i=0;i<n;i++)
    scanf("%d",&sc[i]);
    int max=sc[0];
    int min=sc[0];
    for (i=1;i<n;i++) {
        if (sc[i]>max) {
            max=sc[i];
        }
        if (sc[i]<min) {
            min=sc[i];
        }
    }
    printf("max score: %d\n", max);
    printf("min score: %d\n", min);
    return 0;
}
