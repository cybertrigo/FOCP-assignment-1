#include <stdio.h>

int main() {
    int x,y;
    printf("enter x and y: ");
    scanf("%d %d",&x,&y);
    
    if(x>0 && y>0) {
        printf("point lies in quadrant 1\n",x,y);
    } 
    else if(x<0 && y>0) {
        printf("point lies in quadrant 2\n",x,y);
    } 
    else if(x<0 && y<0) {
        printf("point lies in quadrant 3\n",x,y);
    } 
    else if(x>0 && y<0) {
        printf("point lies in quadrant 4\n",x,y);
    } 
    else {
        printf("point lies on the axis\n",x,y);
    }
        
    return 0;
}
