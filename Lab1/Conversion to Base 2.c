#include <stdio.h>

int main(void){
int x;
int a, b, c, d;
int q, w, r, t;

printf("Enter number to convert to base 2: ");
scanf("%d", &x);

q=x;
a=x%2;

w=q/2;
b=q%2;

r=w/2;
c=w%2;

t=r/2;
d=r%2;

printf("The four digits of that number are as follows:\n");
printf("Most significant digit: %d\n",  a);
printf("Next digit: %d\n", b);
printf("Next digit: %d\n",c);
printf("Least significant digit: %d",  d);
return 0;
}
