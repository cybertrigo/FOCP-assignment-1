#include <stdio.h>

int main() {
    int r=5;
    for (int i=1;i<=r;i++) {
        int a=0;
        for (int j=1;j<=i;j++) {
            printf("%d",a);
            a=1-a;
        }
        printf("   ");
        a=0;
        for (int j=1;j<=i;j++) {
            printf("%d",a);
            a=1-a;
        }
        printf("\n");
    }
    return 0;
}

