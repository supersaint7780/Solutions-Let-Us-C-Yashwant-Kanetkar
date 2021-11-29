#include <stdio.h>

int main() {
    int x1,y1,x2,y2,x3,y3;
    printf("enter the coordinates of the first point\n");
    scanf("%d %d",&x1,&y1);
    printf("enter the coordinates of the second point\n");
    scanf("%d %d",&x2,&y2);
    printf("enter the coordinates of the third point\n");
    scanf("%d %d",&x3,&y3);
    int area = x1 * (y2 - y3) - x2 * (y1 - y3) + x3 * (y1 - y2);
    if(area == 0)
        printf("the points are collinear\n");
    else
        printf("the points do not lie on the same line\n");
    return 0;
}