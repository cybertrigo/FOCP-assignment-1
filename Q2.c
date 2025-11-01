#include <stdio.h>

int main() {
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    if (a<0) 
    a=-a;
    if (b<0) 
    b=-b;
    int c=a;
    int d=b;
    while (d!=0) {
        int temp =d;
        d=c%d;
        c=temp;
    }
    
    printf("the HCF of %d and %d is: %d\n", a, b, c);
    
    return 0;
}