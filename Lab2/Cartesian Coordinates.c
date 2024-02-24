#include <stdio.h>

int main(void){
double x=0.0, y=0.0;

printf("Enter the x-coordinate in floating point: Enter the y-coordinate in floating point: \n");
scanf("%lf %lf", &x, &y);

x = rint(x * 100)/100;
y = rint(y * 100)/100;

if (x==0 && y==0){
printf("(%.2lf, %.2lf) is at the origin", x,y);
}
else if (x==0 && y != 0.0)
{
printf("(%.2lf, %.2lf) is on the y axis.", x,y);
}
else if (x!=0 && y==0)
{
printf("(%.2lf, %.2lf) is on the x axis", x,y);
}
else if (x>0 && y>0)
{
printf("(%.2lf, %.2lf) is in quadrant I.", x,y);
}
else if (x<0 && y>0)
{
printf("(%.2lf, %.2lf) is in quadrant II.", x,y);
}
else if (x<0 && y<0)
{
printf("(%.2lf, %.2lf) is in quadrant III.", x,y);
}
else if (x>0 && y<0)
{
printf("(%.2lf, %.2lf) is in quadrant IV.", x,y);
}
return 0;
}
