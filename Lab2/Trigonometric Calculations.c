#include <stdio.h>
#include <math.h>
int main(void){
double a = 0, b = 0, c = 0, z = 0, y = 0;
printf("Enter X: Enter Y: ");
scanf("%lf %lf", &a, &b);

c=sqrt(a * a + b * b);
printf("The Hypotenuse Length is: %.1lf\n", c);

z = b/c;
y = asin(z);
y = (y * 180)/ M_PI;

printf("The Angle Theta is: %.1lf degrees", y);
return 0;
}

