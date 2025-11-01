#include <stdio.h>

int main() {
    int choice;
    printf("1.Binary to Decimal\n2.Decimal to Binary\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int a,b=0,c=1,rem;
        printf("Enter binary: ");
        scanf("%d", &a);
        while (a > 0) {
            rem = a % 10;
            b=b+rem*c;
            a=a/10;
            c=c*2;
        }
        printf("Decimal = %d\n",b);
    } 
    else if (choice == 2) {
        int a,b[20],i=0;
        printf("Enter decimal: ");
        scanf("%d", &num);
        while (num > 0) {
            bin[i++] = num % 2;
            num num/2;
        }
        printf("Binary = ");
        for (int j = i - 1; j >= 0; j--)
            printf("%d", bin[j]);
        printf("\n");
    } 
    else
        printf("Invalid choice!\n");

    return 0;
}
