#include <stdio.h>
#include <math.h>

int main(void){
double BMI=0.0, bw=0.0, h=0.0;
char a, b, c, d;


printf("Enter the body weight: ");
scanf("%lf%c%c", &bw, &a, &b);
printf("Enter the height: \n");
scanf("%lf%c%c", &h, &c, &d);

if (a == 'k' && b == 'g'){
bw = bw;
}
else if (a == 'l' && b == 'b'){
bw = bw * 0.4536;
}

if (c == 'm' && d == 't'){
h=h;
}
else if (c == 'i' && d == 'n'){
h=h/39.37;
}

else if (c == 'f' && d == 't'){
h=h/3.28;
}

BMI = bw /(h * h);
BMI = rint(BMI*10.0)/10.0;
printf("The Body Mass Index (BMI) is: %.1lf\n", BMI);

if (BMI < 18.5){
printf("Category: Underweight");
}
else if(BMI >= 18.5 && BMI <= 24.9){
printf("Category: Healthy Weight");
}
else if (BMI >= 25.0 && BMI <= 29.9){
printf("Category: Overweight");
}
else if(BMI >= 30.0){
printf("Category: Obesity");
}
return 0;
}
