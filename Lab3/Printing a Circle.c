#include <stdio.h>
#include <math.h>

int main(void){
int r, a, b; 
// Prompt the user to input the radius
printf("Enter the radius of the circle: ");
scanf("%d", &r);

for (a = -r; a <= r; a=a+1)
{
for (b = -r; b <= r; b=b+1)
{
if (a*a+b*b> r*r)
printf(".");
else
printf("o");
}
printf("\n");
}
return 0;
}


