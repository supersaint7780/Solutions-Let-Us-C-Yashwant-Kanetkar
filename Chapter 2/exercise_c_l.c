#include <stdio.h>

int main() {
    int x,y;
    printf("enter the coordinates of the point\n");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0)
        printf("the point is at the origin\n");
    else if(x==0 && y!=0)
        printf("the point lies on the y axis\n");
    else if(x!=0 && y==0)
        printf("the point lies ont the x axis\n");
    else
        printf("the point does not lie on any axis\n");
    return 0;
}