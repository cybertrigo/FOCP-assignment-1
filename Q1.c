#include <stdio.h>
#include <math.h>

int main() {
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    
    if (a<=0) {
        printf("%d is not an armstrong number\n", a);
        return 0;
    }
    
    int og = a;
    int temp = a;
    int count = 0;
    while (temp != 0) {
        count++;
        temp /= 10;
    }
    
    int sum = 0;
    temp = a;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }
    
    if (sum == og) {
        printf("%d is an Armstrong number.\n", a);
    } else {
        printf("%d is not an Armstrong number.\n", a);
    }
    
    return 0;
}