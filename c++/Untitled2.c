#include <stdio.h>
#include <math.h>
int main()
{
    int  x1, y1, x2, y2, gdistance;
    scanf("%d %d %d %d", &x1,&y1,&x2,y2);


    gdistance = ((x2*y1)+(x2*y2));
    printf("Distance between the said points: %d",gdistance);
    printf("\n");
    return 0;
}
