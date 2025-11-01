#include <stdio.h>
int main() {
    int arr[5]={1,2,3,4,99};
    int index=-1;
    int flag=0;
    for (int i=0;i<5;i++) {
        if (arr[i]==99) {
            index=i;
            flag=1;
        }
    }
    if (flag) {
        printf("occurrence of 99 is at index %d\n", index);
    } else {
        printf("99 is not found\n");
    }
    
    return 0;
}
